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
/* FUNCTION NAME:  GPIO_voidSetPinDirection                 */
/* FUNCTION PARAMETER:  1- u8 Copy_u8Port                   */
/*                      2- u8 Copy_u8Pin                    */
/*                      3- u8 Copy_u8Mode                   */
/* FUNCTION RETURN:  NONE                                   */
/* FUNCTION DESCRIPTION:  SET THE MODE OF DISIRED BIT       */
/************************************************************/
void GPIO_voidSetPinDirection(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Mode)
{
    switch(Copy_u8Port)
    {
        case GPIOA: 
            if(Copy_u8Pin <= 7)
            {
                /* FIRST CLEAR THE REQUIRED 4 BITS THEN WRITE ON IT BY ORING WITH Copy_u8Port  */
                GPIOA_CRL &= ~((0b1111)<< (Copy_u8Pin * 4)); 
                GPIOA_CRL |= ~((Copy_u8Port)<< (Copy_u8Pin * 4));
            }
            else if(Copy_u8Pin <= 15)
            {
                /* FIRST CLEAR THE REQUIRED 4 BITS THEN WRITE ON IT BY ORING WITH Copy_u8Port  */
                GPIOA_CRH &= ~((0b1111)<< ((Copy_u8Pin - 8 ) * 4)); 
                GPIOA_CRH |= ~((Copy_u8Port)<< ((Copy_u8Pin - 8) * 4));
            }
            else
            {
                /* DO NOTHING */
            }
        break;
        case GPIOB: 
            if(Copy_u8Pin <= 7)
            {
                /* FIRST CLEAR THE REQUIRED 4 BITS THEN WRITE ON IT BY ORING WITH Copy_u8Port  */
                GPIOB_CRL &= ~((0b1111)<< (Copy_u8Pin * 4)); 
                GPIOB_CRL |= ~((Copy_u8Port)<< (Copy_u8Pin * 4));
            }
            else if(Copy_u8Pin <= 15)
            {
                /* FIRST CLEAR THE REQUIRED 4 BITS THEN WRITE ON IT BY ORING WITH Copy_u8Port  */
                GPIOB_CRH &= ~((0b1111)<< ((Copy_u8Pin - 8 ) * 4)); 
                GPIOB_CRH |= ~((Copy_u8Port)<< ((Copy_u8Pin - 8 ) * 4));
            }
            else
            {
                /* DO NOTHING */
            }
        break;
        case GPIOC: 
            if(Copy_u8Pin <= 7)
            {
                /* FIRST CLEAR THE REQUIRED 4 BITS THEN WRITE ON IT BY ORING WITH Copy_u8Port  */
                GPIOC_CRL &= ~((0b1111)<< (Copy_u8Pin * 4)); 
                GPIOC_CRL |= ~((Copy_u8Port)<< (Copy_u8Pin * 4));
            }
            else if(Copy_u8Pin <= 15)
            {
                /* FIRST CLEAR THE REQUIRED 4 BITS THEN WRITE ON IT BY ORING WITH Copy_u8Port  */
                GPIOC_CRH &= ~((0b1111)<< ((Copy_u8Pin - 8 ) * 4)); 
                GPIOC_CRH |= ~((Copy_u8Port)<< ((Copy_u8Pin - 8 ) * 4));
            }
            else
            {
                /* DO NOTHING */
            }
        break;
        default: 
            /* DO NOTHING */ 
        break;
    }
}
/************************************************************/
/* FUNCTION NAME:  GPIO_voidSetPinValue                     */
/* FUNCTION PARAMETER:  1- u8 Copy_u8Port                   */
/*                      2- u8 Copy_u8Pin                    */
/*                      3- u8 Copy_u8Value                  */
/* FUNCTION RETURN:  NONE                                   */
/* FUNCTION DESCRIPTION:  SET THE VALUE OF DISIRED BIT      */
/************************************************************/
void GPIO_voidSetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Value)
{
    switch(Copy_u8Port)
    {
        case GPIOA: 
            /* SET THE OUTPUT VOLTAGE IF HIGH OR LOW */
            if(Copy_u8Value == GPIO_LOW)
            {
                CLR_BIT(GPIOA_ODR,Copy_u8Pin);
            }
            else if (Copy_u8Value == GPIO_HIGH)
            {
                SET_BIT(GPIOA_ODR,Copy_u8Pin);
            }
            else
            {
                /* DO NOTHING */
            }
        break;
        case GPIOB: 
            /* SET THE OUTPUT VOLTAGE IF HIGH OR LOW */
            if(Copy_u8Value == GPIO_LOW)
            {
                CLR_BIT(GPIOB_ODR,Copy_u8Pin);
            }
            else if (Copy_u8Value == GPIO_HIGH)
            {
                SET_BIT(GPIOB_ODR,Copy_u8Pin);
            }
            else
            {
                /* DO NOTHING */
            }
        break;
        case GPIOC: 
            /* SET THE OUTPUT VOLTAGE IF HIGH OR LOW */
            if(Copy_u8Value == GPIO_LOW)
            {
                CLR_BIT(GPIOC_ODR,Copy_u8Pin);
            }
            else if (Copy_u8Value == GPIO_HIGH)
            {
                SET_BIT(GPIOC_ODR,Copy_u8Pin);
            }
            else
            {
                /* DO NOTHING */
            }
        break;
        default: 
            /* DO NOTHING */
        break;
    }
}
/************************************************************/
/* FUNCTION NAME:  GPIO_voidGetPinValue                     */
/* FUNCTION PARAMETER:  1- u8 Copy_u8Port                   */
/*                      2- u8 Copy_u8Pin                    */
/* FUNCTION RETURN:  u8 [THE VALUE OF REQUIRED PIN]         */
/* FUNCTION DESCRIPTION:  GET THE VALUE OF DISIRED BIT      */
/************************************************************/
u8 GPIO_voidGetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin)
{
    u8 Local_u8Result = 0;
    switch (Copy_u8Port)
    {
    case GPIOA:
        /* GET THE VALUE OF REQUIRED BIT */
        Local_u8Result = GET_BIT(GPIOA_IDR, Copy_u8Pin);
    break;
    case GPIOB:
        /* GET THE VALUE OF REQUIRED BIT */
        Local_u8Result = GET_BIT(GPIOB_IDR, Copy_u8Pin);
    break;
    case GPIOC:
        /* GET THE VALUE OF REQUIRED BIT */
        Local_u8Result = GET_BIT(GPIOC_IDR, Copy_u8Pin);
    break;    
    default:
        /* DO NOTHING */
    break;
    }
    return Local_u8Result;
}