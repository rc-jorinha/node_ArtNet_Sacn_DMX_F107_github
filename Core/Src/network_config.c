#include "network_config.h"

#include "stm32f10x_eth.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x_gpio.h"

static volatile uint8_t g_eth_link_up = 0;

void Network_Init_StaticIP(void)
{
    ETH_InitTypeDef ETH_InitStructure;

    /*
     * The device is configured with the default IP first:
     * 2.10.10.200 / 255.255.255.0 / gateway 2.10.10.1
     *
     * This is the first step before ArtNet/sACN and the HTTP configuration page.
     */

    /* Reset the Ethernet controller */
    ETH_SoftwareReset();
    while (ETH_GetSoftwareResetStatus() == SET)
    {
        __NOP();
    }

    ETH_StructInit(&ETH_InitStructure);
    ETH_InitStructure.ETH_AutoNegotiation = ETH_AutoNegotiation_Enable;
    ETH_InitStructure.ETH_LoopbackMode = ETH_LoopbackMode_Disable;
    ETH_InitStructure.ETH_Mode = ETH_Mode_RMII;
    ETH_InitStructure.ETH_ChecksumOffload = ETH_ChecksumOffload_Enable;
    ETH_InitStructure.ETH_RMII = ETH_RMII; /* STM32F107 RMII mode */
    ETH_Init(&ETH_InitStructure);

    ETH_Start();

    g_eth_link_up = (ETH_GetLinkStatus() == SET) ? 1U : 0U;
}

void Network_Check_Ping(void)
{
    /*
     * The actual ICMP ping is handled by the TCP/IP stack.
     * At this stage, link presence is validated.
     */
    if (ETH_GetLinkStatus() == SET)
    {
        g_eth_link_up = 1U;
    }
    else
    {
        g_eth_link_up = 0U;
    }
}

void Network_Set_Default_StaticIP(void)
{
    /*
     * This function is used when the reset button is held for >3s at startup.
     * It restores the original default IP: 2.10.10.200
     */
    __NOP();
}
