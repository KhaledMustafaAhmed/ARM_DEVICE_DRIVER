/* PREPROCESSOR FILE GARUD */
#ifndef	RCC_PRIVATE_H
#define RCC_PRIVATE_H
/************************************************************/
/* Author	: Khaled Mustafa                                */
/* Date		: 21 MAR 2024									*/
/* Version  : Version 1										*/
/************************************************************/

/************************************************************/
/*                  REGISTER DEFINITIONS                    */
/*             BASE ADDRESS OF RCC IS 0x40021000            */
/************************************************************/

#define RCC_CR              *((u32 *)0x4002 1000) /* CLOCK CONTROL FOR PROCESSOR [HSI-HSE-PLL] */
#define RCC_CFGR            *((u32 *)0x4002 1004) /* CLOCK CONTROL FOR PROCESSOR [HSI-HSE-PLL] */
#define RCC_CIR             *((u32 *)0x4002 1008) /* RESET CONTROL */
#define RCC_APB2RSTR        *((u32 *)0x4002 100C) /* RESET CONTROL */
#define RCC_APB1RSTR        *((u32 *)0x4002 1010) /* RESET CONTROL */
#define RCC_AHBENR          *((u32 *)0x4002 1014) /* CLOCK CONTROL FOR PERIPHERLAS */
#define RCC_APB2ENR         *((u32 *)0x4002 1018) /* CLOCK CONTROL FOR PERIPHERLAS */
#define RCC_APB1ENR         *((u32 *)0x4002 101C) /* CLOCK CONTROL FOR PERIPHERLAS */
#define RCC_BDCR            *((u32 *)0x4002 1020) /* RESET CONTROL */
#define RCC_CSR             *((u32 *)0x4002 1024) /* RESET CONTROL */

/************************************************************/
/*           MACROS FOR DIFFERENT CLOCK SYSTEM SOURCE       */
/************************************************************/

#define RCC_HSI              1
#define RCC_HSE_CRYSTAL      2
#define RCC_HSE_RC           3
#define RCC_PLL              4

/************************************************************/
/*           MACROS FOR INPUT CLOCK FOR PLL                 */
/************************************************************/
#define RCC_HSI_BY_2               1
#define RCC_PLL_HSE_NOT_DIVIDE     2
#define RCC_PLL_HSE_BY_2           3






#endif