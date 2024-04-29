/*************************************************************************************************************************************/
/**********  Author   : Mostafa Bakir *************************************************************************************************/
/**********   Date    : 28-APR-2024  *************************************************************************************************/
/**********   version : V0.1         *************************************************************************************************/
/**********   COTS    : MCAL         *************************************************************************************************/
/*************************************************************************************************************************************/


#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"

void RCC_voidInitSysClock(void)
{
	
}

void RCC_voidEnableClock(u8 Copy_u8BusId ,u8 Copy_u8PerId)
{
	if (Copy_u8PerId <= 31)
	{
		switch Copy_u8BusId
		{
			case RCC_AHB1:        SET_BIT(RCC_AHB1ENR  ,Copy_u8PerId) break;
			case RCC_AHB2:        SET_BIT(RCC_AHB2ENR  ,Copy_u8PerId) break;
			case RCC_AHB3:        SET_BIT(RCC_AHB3ENR  ,Copy_u8PerId) break;
			case RCC_APB11:       SET_BIT(RCC_APB1ENR1 ,Copy_u8PerId) break;
			case RCC_APB12:       SET_BIT(RCC_APB1ENR2 ,Copy_u8PerId) break;
			case RCC_APB2:        SET_BIT(RCC_APB2ENR  ,Copy_u8PerId) break;
			default:  /* RETURN ERROR */
		}
	}
	else
	{
		              /* RETURN ERROR */
	}
}

void RCC_voidDisableClock(u8 Copy_u8BusId ,u8 Copy_u8PerId)
{
	if (Copy_u8PerId <= 31)
	{
		switch Copy_u8BusId
		{
			case RCC_AHB1:        CLR_BIT(RCC_AHB1ENR  ,Copy_u8PerId) break;
			case RCC_AHB2:        CLR_BIT(RCC_AHB2ENR  ,Copy_u8PerId) break;
			case RCC_AHB3:        CLR_BIT(RCC_AHB3ENR  ,Copy_u8PerId) break;
			case RCC_APB11:       CLR_BIT(RCC_APB1ENR1 ,Copy_u8PerId) break;
			case RCC_APB12:       CLR_BIT(RCC_APB1ENR2 ,Copy_u8PerId) break;
			case RCC_APB2:        CLR_BIT(RCC_APB2ENR  ,Copy_u8PerId) break;
			default:  /* RETURN ERROR */
		}
	}
	else
	{
		              /* RETURN ERROR */
	}
}


