#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - it selects the correct function to perform
 *               the operation given by the user.
 * @s: The operator to be passed as argument.
 *
 * Return: The pointer to the function corresponding
 *         to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
		op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int jess = 0;

	while (ops[jess].op != NULL && *(ops[jess].op) != *s)
	jess++;
	return (ops[jess].f);
}
