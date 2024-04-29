/*************************************************************************************************************************************/
/**********  Author  : Mostafa Bakir *************************************************************************************************/
/**********   Date    : 23-APR-2024  *************************************************************************************************/
/**********   version : V0.1         *************************************************************************************************/
/**********   COTS    : LIB          *************************************************************************************************/
/*************************************************************************************************************************************/

#ifndef STD_TYPES_H
#define STD_TYPES_H

#define SET_BIT(VAR,BIT)        VAR |=   (1 << (BIT))
#define CLR_BIT(VAR,BIT)        VAR &=  ~(1 << (BIT))  
#define GET_BIT(VAR,BIT)        ((VAR >> BIT)& 1)
#define TOG_BIT(VAR,BIT)        VAR ^=   (1 << (BIT))


#endif