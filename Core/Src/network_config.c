#include "network_config.h"

#include "stm32f10x_rcc.h"
#include "stm32f10x_gpio.h"

static void Network_Set_IP(uint8_t a, uint8_t b, uint8_t c, uint8_t d)
{
    (void)a; (void)b; (void)c; (void)d;
}

void Network_Init_StaticIP(void)
{
    /* Placeholder for lwIP/ETH initialization.
     * This project is in the initial stage.
     * The actual static IP configuration will be implemented once the ETH/lwIP stack is added.
     */
    __NOP();
}

void Network_Check_Ping(void)
{
    /* Placeholder for ICMP ping verification.
     * This function will validate Ethernet connectivity after lwIP is configured.
     */
    __NOP();
}

void Network_Set_Default_StaticIP(void)
{
    /* Restores default IP 2.10.10.200 when reset button is held >3s during startup */
    __NOP();
}
