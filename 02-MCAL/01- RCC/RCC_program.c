/************************************************************/
/* Author	: Khaled Mustafa                                */
/* Date		: 21 MAR 2024									*/
/* Version  : Version 1										*/
/************************************************************/

/************************************************************/
/*                    INCLUDE LIBRARIES                     */
/************************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

/************************************************************/
/*                  INCLUDE DRIVER FILES                    */
/************************************************************/
#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"

/************************************************************/
/* FUNCTION NAME:  RCC_voidEnableClock                      */
/* FUNCTION PARAMETER:  1- u8 Copy_u8BusId                  */
/*                      2- u8 Copy_u8PeripheralId           */
/* FUNCTION RETURN:  NONE                                   */
/* FUNCTION DESCRIPTION:  ENABLE THE DESIRED PERIPHERAL     */
/************************************************************/
void RCC_voidEnableClock(u8 Copy_u8BusId, u8 Copy_u8PeripheralId)
{
    if(Copy_u8PeripheralId <= 31)
    {
        switch(Copy_u8BusId)
        {
            case RCC_AHB:   SET_BIT(RCC_AHBENR,  Copy_u8PeripheralId ) break;
            case RCC_APB1 : SET_BIT(RCC_APB1ENR, Copy_u8PeripheralId ) break;
            case RCC_APB2 : SET_BIT(RCC_APB2ENR, Copy_u8PeripheralId ) break;  
            default:               /* ERROR RETURN */                  break;
        }
    }
    else
    {
        /* ERROR RETURN */
    }
}

/************************************************************/
/* FUNCTION NAME:  RCC_voidDisableClock                     */
/* FUNCTION PARAMETER:  1- u8 Copy_u8BusId                  */
/*                      2- u8 Copy_u8PeripheralId           */
/* FUNCTION RETURN:  NONE                                   */
/* FUNCTION DESCRIPTION:  DISABLE THE DESIRED PERIPHERAL    */
/************************************************************/
void RCC_voidDisableClock(u8 Copy_u8BusId, u8 Copy_u8PeripheralId)
{
    if(Copy_u8PeripheralId <= 31)
    {
        switch(Copy_u8BusId)
        {
            case RCC_AHB:   CLR_BIT(RCC_AHBENR,  Copy_u8PeripheralId ) break;
            case RCC_APB1 : CLR_BIT(RCC_APB1ENR, Copy_u8PeripheralId ) break;
            case RCC_APB2 : CLR_BIT(RCC_APB2ENR, Copy_u8PeripheralId ) break;  
            default:               /* ERROR RETURN */                  break;
        }
    }
    else
    {
        /* ERROR RETURN */
    }
}
/************************************************************/
/* FUNCTION NAME:  RCC_voidInitSystemClock                  */
/* FUNCTION PARAMETER:  NONE                                */
/* FUNCTION RETURN:  NONE                                   */
/* FUNCTION DESCRIPTION: INITIALIZE SYSTEM CLOCK BASED ON   */
/*                       CONFIGURATIONS IN CONFIG FILE      */ 
/************************************************************/
void RCC_voidInitSystemClock(void)
{
    #if RCC_CLOCK_SYSTEM == RCC_HSE_CRYSTAL
        /* IF RCC_HSE SO ENABLE THE HSE BIT IN RCC_CR REGISTER AND SET THE SYSTEM CLOCK SWITCH
        BIT0 AND CLEAR BIT 1  TO SELECT THE HSE CRYSTAL AS SYSTEM CLOCK IN RCC_CFGR REGISTER */
        RCC_CR = 0X0001 0000;
        RCC_CFGR = 0x0000 0001;

    #elif RCC_CLOCK_SYSTEM == RCC_HSE_RC
        /* IF RCC_HSE SO ENABLE THE HSE BIT IN RCC_CR REGISTER AND SET THE SYSTEM CLOCK SWITCH
        BIT0 AND CLEAR BIT 1  TO SELECT THE HSE RC AS SYSTEM CLOCK IN RCC_CFGR REGISTER */
        RCC_CR = 0X0005 0000;
        RCC_CFGR = 0x0000 0001;

    #elif RCC_CLOCK_SYSTEM == RCC_HSI
        /* IF RCC_HSI SO ENABLE THE HSI BIT IN RCC_CR REGISTER AND CLEAR THE SYSTEM CLOCK SWITCH
        BITS TO SELECT THE HSI AS SYSTEM CLOCK IN RCC_CFGR REGISTER */
        RCC_CR = 0X0000 0081;
        RCC_CFGR = 0x0000 0000;

    #elif RCC_CLOCK_SYSTEM == RCC_PLL
        /* CHECK RCC_PLL_INPUT CLOCK */
        #if RCC_PLL_SRC_INPUT == RCC_HSI_BY_2

        #elif RCC_PLL_SRC_INPUT == RCC_PLL_HSE_BY_2

        #elif RCC_PLL_SRC_INPUT == RCC_PLL_HSE_NOT_DIVIDE

        #else 
            #error ("WRONG RCC_PLL_SRC_INPUT SETTING")
        #endif
                
    #else
        #error ("WRONG RCC CLOCK SYSTEM SETTING")
    #endif    
}
