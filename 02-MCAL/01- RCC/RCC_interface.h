/* PREPROCESSOR FILE GARUD */
#ifndef	RCC_INTERFACE_H
#define RCC_INTERFACE_H
/************************************************************/
/* Author	: Khaled Mustafa                                */
/* Date		: 21 MAR 2024									*/
/* Version  : Version 1										*/
/************************************************************/


/************************************************************/
/* FUNCTION NAME:  RCC_voidEnableClock                      */
/* FUNCTION PARAMETER:  1- u8 Copy_u8BusId                  */
/*                      2- u8 Copy_u8PeripheralId           */
/* FUNCTION RETURN:  NONE                                   */
/* FUNCTION DESCRIPTION:  ENABLE THE DESIRED PERIPHERAL     */
/************************************************************/
void RCC_voidEnableClock(u8 Copy_u8BusId, u8 Copy_u8PeripheralId);

/************************************************************/
/* FUNCTION NAME:  RCC_voidDisableClock                     */
/* FUNCTION PARAMETER:  1- u8 Copy_u8BusId                  */
/*                      2- u8 Copy_u8PeripheralId           */
/* FUNCTION RETURN:  NONE                                   */
/* FUNCTION DESCRIPTION:  DISABLE THE DESIRED PERIPHERAL    */
/************************************************************/
void RCC_voidDisableClock(u8 Copy_u8BusId, u8 Copy_u8PeripheralId);

/************************************************************/
/* FUNCTION NAME:  RCC_voidInitSystemClock                  */
/* FUNCTION PARAMETER:  NONE                                */
/* FUNCTION RETURN:  NONE                                   */
/* FUNCTION DESCRIPTION: INITIALIZE SYSTEM CLOCK BASED ON   */
/*                       CONFIGURATIONS IN CONFIG FILE      */ 
/************************************************************/
void RCC_voidInitSystemClock(void);




#endif