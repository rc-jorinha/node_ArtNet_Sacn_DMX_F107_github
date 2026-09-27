#ifndef __PIN_CONFIG_H
#define __PIN_CONFIG_H

#include "stm32f10x.h"

/* RMII Ethernet pins for LAN8720AI */
#define ETH_REF_CLK_PIN     GPIO_Pin_1
#define ETH_REF_CLK_PORT    GPIOA
#define ETH_MDIO_PIN        GPIO_Pin_2
#define ETH_MDIO_PORT       GPIOA
#define ETH_CRS_DV_PIN      GPIO_Pin_7
#define ETH_CRS_DV_PORT     GPIOA
#define ETH_TXD0_PIN        GPIO_Pin_12
#define ETH_TXD0_PORT       GPIOB
#define ETH_TXD1_PIN        GPIO_Pin_13
#define ETH_TXD1_PORT       GPIOB
#define ETH_TXEN_PIN        GPIO_Pin_11
#define ETH_TXEN_PORT       GPIOB
#define ETH_MDC_PIN         GPIO_Pin_1
#define ETH_MDC_PORT        GPIOC
#define ETH_RXD0_PIN        GPIO_Pin_4
#define ETH_RXD0_PORT       GPIOC
#define ETH_RXD1_PIN        GPIO_Pin_5
#define ETH_RXD1_PORT       GPIOC
#define ETH_NRST_PIN        GPIO_Pin_0
#define ETH_NRST_PORT       GPIOC

#define LED_STA_PIN         GPIO_Pin_12
#define LED_STA_PORT        GPIOA

#define RESET_BUTTON_PIN    GPIO_Pin_2
#define RESET_BUTTON_PORT   GPIOE

#define SW1_PIN             GPIO_Pin_11
#define SW1_PORT            GPIOA

#define SW2_PIN             GPIO_Pin_2
#define SW2_PORT            GPIOD

#define DMX1_RI_PIN         GPIO_Pin_10
#define DMX1_RI_PORT        GPIOA
#define DMX1_RE_DE_PIN      GPIO_Pin_9
#define DMX1_RE_DE_PORT     GPIOC
#define DMX1_DO_PIN         GPIO_Pin_9
#define DMX1_DO_PORT        GPIOA

#define DMX2_RI_PIN         GPIO_Pin_6
#define DMX2_RI_PORT        GPIOD
#define DMX2_RE_DE_PIN      GPIO_Pin_4
#define DMX2_RE_DE_PORT     GPIOD
#define DMX2_DO_PIN         GPIO_Pin_5
#define DMX2_DO_PORT        GPIOD

void MX_GPIO_Init(void);
void MX_ETH_PHY_Init(void);

#endif
