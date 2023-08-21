#include "main.h"
#include <stdlib.h>

extern int add(int a, int b);
extern int sub(int a, int b);
extern int mul(int a, int b);
extern int mod(int a, int b);
/**
 * add - adds two numbers
 * @a: first number
 * @b: second number
 *
 * Return: addition of two numbers
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts two numbers
 * @a: first number
 * @b: second number
 *
 * Return: subtraction of two numbers
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: multiplies two numbers
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * mod - modulus of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: modulus division of two numbers
 */
int mod(int a, int b)
{
	return (a % b);
}
