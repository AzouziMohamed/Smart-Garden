#ifndef __DHT11_H__
#define __DHT11_H__

#include "stm32f1xx_hal.h" // adaptez selon votre MCU

#define DHT11_PORT GPIOA
#define DHT11_PIN GPIO_PIN_1

void DHT11_Start(void);
uint8_t Check_Response(void);
uint8_t DHT11_Read(void);

void Set_Pin_Output(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
void Set_Pin_Input(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
void delay(uint16_t time);

#endif
