#ifndef	BIT_MATH_H
#define BIT_MATH_H
/************************************************************/
/* Author	: Khaled Mustafa                                */
/* Date		: 15 MAR 2024									*/
/* Version  : Version 1										*/
/************************************************************/

#define SET_BIT(VAR,BIT)	VAR|=(1<<(BIT))

#define CLR_BIT(VAR,BIT)	VAR&=(~(1<<(BIT)))

#define GET_BIT(VAR,BIT)	((VAR >> BIT)& 1)

#define TOG_BIT(VAR,BIT)	VAR^=(1<<(BIT))

#endif