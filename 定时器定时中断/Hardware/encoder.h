#ifndef __ENCODER_H__
#define __ENCODER_H__
void Encoder_Init(void);
void EXTI9_5_IRQHandler(void);
uint16_t Encoder_Get(void);
#endif
