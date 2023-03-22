#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 *
 * Return: addition result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: first number
 * @b: second number
 *
 * Return: subtraction result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: multiplication result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 *
 * Return: division result
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder after dividing two numbers
 * @a: first number
 * @b: second number
 *
 * Return: remainder from division
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error");
		exit(100);
	}
	return (a % b);
}
