/*
 * Dio.c
 *
 *  Created on: Jan 15, 2021
 *      Author: power system
 */
#include "Std_Types.h"
#include "Mcu_Hw.h"
#include "Bit_Man.h"
#include "Dio.h"

#define NUM_OF_CHANNELS_IN_PORT      8
void Dio_Init(void)
{


}
void Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_ChannelLevelType ChannelLevel)
{
	Dio_PortType PortNum = ChannelId/NUM_OF_CHANNELS_IN_PORT;
	uint8 BitOffset = ChannelId%NUM_OF_CHANNELS_IN_PORT;
	if(ChannelLevel == STD_HIGH)
	{
		switch (PortNum) {
		case Dio_Port_A:
			SET_BIT(PORTA,BitOffset);
			break;
		case Dio_Port_B:
			SET_BIT(PORTB,BitOffset);
			break;
		case Dio_Port_C:
			SET_BIT(PORTC,BitOffset);
			break;
		case Dio_Port_D:
			SET_BIT(PORTD,BitOffset);
			break;
		default:
			break;
		}

	}
	else
	{

		switch (PortNum) {
		case Dio_Port_A:
			CLR_BIT(PORTA,BitOffset);
			break;
		case Dio_Port_B:
			CLR_BIT(PORTB,BitOffset);
			break;
		case Dio_Port_C:
			CLR_BIT(PORTC,BitOffset);
			break;
		case Dio_Port_D:
			CLR_BIT(PORTD,BitOffset);
			break;
		default:
			break;
	}
}
Dio_ChannelLevelType Dio_ReadChannel(Dio_ChannelType ChannelId)
{
	Dio_PortType PortNum = ChannelId/NUM_OF_CHANNELS_IN_PORT;
	uint8 BitOffset = ChannelId%NUM_OF_CHANNELS_IN_PORT;


	switch (PortNum) {
			case Dio_Port_A:
				GET_BIT(PORTA,BitOffset);
				break;
			case Dio_Port_B:
				GET_BIT(PORTB,BitOffset);
				break;
			case Dio_Port_C:
				GET_BIT(PORTC,BitOffset);
				break;
			case Dio_Port_D:
				GET_BIT(PORTD,BitOffset);
				break;
			default:
				break;



}
void Dio_FlipChannel(Dio_ChannelType ChannelId)
{





}
