#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - Selects the correct function to perform the operation
 * based on the given operator.
 * @s: The operator passed as an argument to the program
 * Return: A pointer to the corresponding function, or NULL if the operator
 * is not valid.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", add},
{"-", sub},
{"*", mul},
{"/", division},
{"%", mod},
{NULL, NULL}
};
int i = 0;
while (ops[i].op != NULL)
{
if (*(ops[i].op) == *s)
return (ops[i].f);
i++;
}
return (NULL);
}
