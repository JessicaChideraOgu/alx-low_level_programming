#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - it returns the sum of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - it returns the subtraction of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The subtraction of a from b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - it returns the product of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The multipllication of a with b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - it returns the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The division of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - it returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
