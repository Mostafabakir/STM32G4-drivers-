/*************************************************************************************************************************************/
/**********  Author   : Mostafa Bakir *************************************************************************************************/
/**********   Date    : 28-APR-2024  *************************************************************************************************/
/**********   version : V0.1         *************************************************************************************************/
/**********   COTS    : MCAL         *************************************************************************************************/
/*************************************************************************************************************************************/

#ifndef _RCC_PRIVATE_H
#define _RCC_PRIVATE_H

           /*  Register Definition  */

#define RCC_CR                     *((u32*)0X40021000)
#define RCC_ICSCR                  *((u32*)0X40021004)
#define RCC_CFGR                   *((u32*)0X40021008)
#define RCC_PLLCFGR                *((u32*)0X4002100C)
#define RCC_CIER                   *((u32*)0X40021018)
#define RCC_CIFR                   *((u32*)0X4002101C)
#define RCC_CICR                   *((u32*)0X40021020)
#define RCC_AHB1RSTR               *((u32*)0X40021028)
#define RCC_AHB2RSTR               *((u32*)0X4002102C)
#define RCC_AHB3RSTR               *((u32*)0X40021030)
#define RCC_APB1RSTR1              *((u32*)0X40021038)
#define RCC_APB1RSTR2              *((u32*)0X4002103C)
#define RCC_APB2RSTR               *((u32*)0X40021040)
#define RCC_AHB1ENR                *((u32*)0X40021048)
#define RCC_AHB2ENR                *((u32*)0X4002104C)
#define RCC_AHB3ENR                *((u32*)0X40021050)
#define RCC_APB1ENR1               *((u32*)0X40021058)
#define RCC_APB1ENR2               *((u32*)0X4002105C)
#define RCC_APB2ENR                *((u32*)0X40021060)
#define RCC_AHB1SMENR              *((u32*)0X40021068)
#define RCC_AHB2SMENR              *((u32*)0X4002106C)
#define RCC_AHB3SMENR              *((u32*)0X40021070)
#define RCC_APB1SMENR1             *((u32*)0X40021078)
#define RCC_APB1SMENR2             *((u32*)0X4002107C)
#define RCC_APB2SMENR              *((u32*)0X40021080)
#define RCC_CCIPR                  *((u32*)0X40021088)
#define RCC_CSR                    *((u32*)0X40021090)
#define RCC_CRRCR                  *((u32*)0X40021098)
#define RCC_CCIPR2                 *((u32*)0X4002109C)








#endif
