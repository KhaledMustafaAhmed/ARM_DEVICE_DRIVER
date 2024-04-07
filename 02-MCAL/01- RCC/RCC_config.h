/* PREPROCESSOR FILE GARUD */
#ifndef	RCC_CONFIG_H
#define RCC_CONFIG_H
/************************************************************/
/* Author	: Khaled Mustafa                                */
/* Date		: 21 MAR 2024									*/
/* Version  : Version 1										*/
/************************************************************/

/************************************************************/
/*               CHOOSE ONE OF THE CHOICES:                 */
/*               1- RCC_HSI                                 */                
/*               2- RCC_HSE_CRYSTAL                         */
/*               3- RCC_HSE_RC                              */        
/*               4- RCC_PLL                                 */                  
/************************************************************/
#define RCC_CLOCK_SYSTEM     RCC_PLL   
/************************************************************/
/*               CHOOSE ONE OF THE CHOICES:                 */
/*               1- RCC_HSI_BY_2                            */                
/*               2- RCC_PLL_HSE_NOT_DIVIDE                  */
/*               3- RCC_PLL_HSE_BY_2                        */        
/************************************************************/

/************************************************************/
/*                  CHOOSE FROM 2 TO 16                     */                  
/************************************************************/
/* SELECT VALUE ONLY IF RCC_CLOCK_SYSTEM EQUAL RCC_PLL */
#if RCC_CLOCK_SYSTEM == RCC_PLL 
#define RCC_PLL_SRC_INPUT     RCC_PLL_HSE_NOT_DIVIDE
#define RCC_PLL_MUL_VAL       4
#endif



   


#endif