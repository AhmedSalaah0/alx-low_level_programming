#include "main.h"
/**
 * factorial - func that cacl the factor of num n
 * @n: number which calc the factor for
 * Return: 1 if = 0 or = 1 if < 0 return -1 else find the factor
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
