/*
 * BcdSevSeg.c
 *
 *  Created on: Jan 22, 2021
 *      Author: future
 */

#include "Dio.h"
#include "BcdSevSeg_Cfg.h"
#include "BcdSevSeg.h"

void BcdSevSeg_Enable(BcdSevSeg_Type SevSegNum)
{
	/* set level high to enable pin of corresponding SevSegment*/
	if(SevSegNum == BcdSevSeg_0)
	{
		Dio_WriteChannel(BCDSEVSEG_0_ENABLE_PIN, STD_HIGH);
	}
	else if(SevSegNum == BcdSevSeg_1)
	{

		Dio_WriteChannel(BCDSEVSEG_1_ENABLE_PIN, STD_HIGH);
	}


}
void BcdSevSeg_Disable(BcdSevSeg_Type SevSegNum)
{


}
void BcdSevSeg_DisplayNum(uint8 NumToDisplay)
{


}
