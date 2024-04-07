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

typedef struct _RCC{
    volatile u32 RCC_CR;
    volatile u32 RCC_CFGR;
    volatile u32 RCC_CIR;
    volatile u32 RCC_APB2RSTR;
    volatile u32 RCC_APB1RSTR;
    volatile u32 RCC_AHBENR;
    volatile u32 RCC_APB2ENR;
    volatile u32 RCC_APB1ENR;
    volatile u32 RCC_BDCR;
    volatile u32 RCC_CSR;
    volatile u32 RCC_AHBRSTR;
    volatile u32 RCC_CFGR2;
}_RCC_t;

#define _RCC        ((_RCC_t *)0x4002 1000)

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

/************************************************************/
/*              MACROS FOR RCC DIFFERENT BUSES              */
/************************************************************/
#define RCC_AHB     0
#define RCC_APB1    1
#define RCC_APB2    2



#endif