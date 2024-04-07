/* PREPROCESSOR FILE GARUD */
#ifndef	GPIO_INTERFACE_H
#define GPIO_INTERFACE_H
/************************************************************/
/* Author	: Khaled Mustafa                                */
/* Date		: 23 MAR 2024									*/
/* Version  : Version 1										*/
/************************************************************/

/************************************************************/
/*                   MACROS FOR PORT NAMES                  */
/************************************************************/
typedef enum GPIO_PORT{
    GPIOA,
    GPIOB,
    GPIOC
}GPIO_PORT;

/************************************************************/
/*                   MACROS FOR PINS NUMBER                 */
/************************************************************/
typedef enum GPIO_PIN{
    PIN0,
    PIN1,
    PIN2,
    PIN3,
    PIN4,
    PIN5,
    PIN6,
    PIN7,
    PIN8,
    PIN9,
    PIN10,
    PIN11,
    PIN12,
    PIN13,
    PIN14,
    PIN15
}GPIO_PIN;

/************************************************************/
/*                 MACROS FOR voltage signal                */
/************************************************************/
typedef enum GPIO_VOLT{
    GPIO_LOW,
    GPIO_HIGH
}GPIO_VOLT;

/************************************************************/
/*                   MACROS FOR INPUT MODE                  */
/************************************************************/
#define INPUT_ANALOG        0b0000
#define INPUT_FLOATING      0b0100    
#define INPUT_PULLUP        0b1000
#define INPUT_PULLDOWN      0b1000
/************************************************************/
/*               MACROS FOR OUTPUT MODE SPEED 10MHZ         */
/************************************************************/
#define OUTPUT_SPEED_10MHZ_PUSH_PULL         0b0001
#define OUTPUT_SPEED_10MHZ_OPEN_DRAIN        0b0101
#define OUTPUT_SPEED_10MHZ_AF_PUSH_PULL      0b1001
#define OUTPUT_SPEED_10MHZ_AF_OPEN_DRAIN     0b1101
/************************************************************/
/*               MACROS FOR OUTPUT MODE SPEED 02MHZ         */
/************************************************************/
#define OUTPUT_SPEED_02MHZ_PUSH_PULL         0b0010
#define OUTPUT_SPEED_02MHZ_OPEN_DRAIN        0b0110
#define OUTPUT_SPEED_02MHZ_AF_PUSH_PULL      0b1010
#define OUTPUT_SPEED_02MHZ_AF_OPEN_DRAIN     0b1110
/************************************************************/
/*               MACROS FOR OUTPUT MODE SPEED 50MHZ         */
/************************************************************/
#define OUTPUT_SPEED_50MHZ_PUSH_PULL         0b0011
#define OUTPUT_SPEED_50MHZ_OPEN_DRAIN        0b0111
#define OUTPUT_SPEED_50MHZ_AF_PUSH_PULL      0b1011
#define OUTPUT_SPEED_50MHZ_AF_OPEN_DRAIN     0b1111
/************************************************************/
/* FUNCTION NAME:  GPIO_voidSetPinDirection                 */
/* FUNCTION PARAMETER:  1- u8 Copy_u8Port                   */
/*                      2- u8 Copy_u8Pin                    */
/*                      3- u8 Copy_u8Mode                   */
/* FUNCTION RETURN:  NONE                                   */
/* FUNCTION DESCRIPTION:  SET THE MODE OF DISIRED BIT       */
/************************************************************/
void GPIO_voidSetPinDirection(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Mode);
/************************************************************/
/* FUNCTION NAME:  GPIO_voidSetPinValue                     */
/* FUNCTION PARAMETER:  1- u8 Copy_u8Port                   */
/*                      2- u8 Copy_u8Pin                    */
/*                      3- u8 Copy_u8Value                  */
/* FUNCTION RETURN:  NONE                                   */
/* FUNCTION DESCRIPTION:  SET THE VALUE OF DISIRED BIT      */
/************************************************************/
void GPIO_voidSetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Value);
/************************************************************/
/* FUNCTION NAME:  GPIO_voidGetPinValue                     */
/* FUNCTION PARAMETER:  1- u8 Copy_u8Port                   */
/*                      2- u8 Copy_u8Pin                    */
/* FUNCTION RETURN:  u8 [THE VALUE OF REQUIRED PIN]         */
/* FUNCTION DESCRIPTION:  GET THE VALUE OF DISIRED BIT      */
/************************************************************/
u8 GPIO_voidGetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin);




#endif