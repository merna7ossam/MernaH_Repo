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

}
Dio_ChannelLevelType Dio_ReadChannel(Dio_ChannelType ChannelId)
{



}
void Dio_FlipChannel(Dio_ChannelType ChannelId)
{





}
