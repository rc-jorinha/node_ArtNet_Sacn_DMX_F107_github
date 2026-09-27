# node_ArtNet_Sacn_DMX_F107_github

Projeto para node ArtNet / sACN para DMX512 de 2 universos bidirecional com STM32F107VCT6, Ethernet LAN8720AI e configuração via web.

## Objetivo atual

Primeiro validar a rede do PHY e responder ao ping no endereço inicial:

- IP inicial: 2.10.10.200
- Máscara: 255.255.255.0
- Gateway: 2.10.10.1

## Hardware principal

- MCU: STM32F107VCT6
- Cristal principal: 25 MHz
- PHY: LAN8720AI sem cristal externo
- LED STA: PA12
- Reset: PE2, com restauração do IP original se pressionado > 3 s ao iniciar
- Switch 1: PA11, ativo em nível baixo, define DMX1 como entrada DMX para ArtNet
- Switch 2: PD2, ativo em nível baixo, define DMX2 como entrada DMX para ArtNet

## Mapeamento Ethernet (RMII)

- TXD0 -> PB12
- TXD1 -> PB13
- TXEN -> PB11
- RXD0 -> PC4
- RXD1 -> PC5
- CRS_DV -> PA7
- REF_CLK -> PA1
- MDIO -> PA2
- MDC -> PC1
- nRST -> PC0

## Estrutura do repositório

```
.
├── README.md
├── Core/
│   ├── Inc/
│   │   ├── main.h
│   │   ├── pin_config.h
│   │   └── network_config.h
│   └── Src/
│       ├── main.c
│       ├── pin_config.c
│       └── network_config.c
└── .gitignore
```

## Estado atual

Foi criada a base inicial do firmware para:

- configuração dos GPIOs do RMII
- reset do PHY LAN8720AI
- inicialização da interface Ethernet
- IP estático inicial 2.10.10.200
- verificação de link e preparo para resposta ICMP ping

## Próximo passo

1. Integrar a stack TCP/IP (lwIP ou equivalente)
2. Validar resposta ICMP ping em rede local
3. Configurar página web para IP e universos
4. Implementar ArtNet/sACN e DMX bidirecional
