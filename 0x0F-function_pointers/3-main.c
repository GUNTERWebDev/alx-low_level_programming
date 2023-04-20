#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - perform simple operations on two numbers
 * @argc: arguments count
 * @argv: arguments vector (array of strings)
 * Return: 0 (Success) | anything else (Failure)
 */
int main(int argc, char **argv)
{
	int num1;
	int num2;
	int calc;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	calc = f(num1, num2);
	printf("%d\n", calc);
	return (0);
}
