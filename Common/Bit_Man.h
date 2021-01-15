#ifndef BIT_MAN_H
#define BIT_MAN_H

#include "Std_Types.h"

#define SET_BIT(Reg,Bitoffset)    Reg=(Reg | (1<<Bitoffset))
#define CLR_BIT(Reg,Bitoffset)    Reg=(Reg & (~(1<<Bitoffset)))
#define TOGGLE_BIT(VAR,BIT_NO)    var=var&(~(1<<bit_no))
#endif
