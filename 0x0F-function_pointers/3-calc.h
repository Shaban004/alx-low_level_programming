#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

int (*get_op_func(char *s))(int, int);

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int division(int a, int b);
int mod(int a, int b);

#endif /* CALC_H */
