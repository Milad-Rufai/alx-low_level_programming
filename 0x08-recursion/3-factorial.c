#include <stdio.h>

/*
 * function that returns the factorial of a given number
 *  @n: The number
 *
 *  Return: On success factorial of @n.
 */

int factorial(int n)
{
	if(n < 0)
	{return -1;
	}

	if(n == 0)
	{return 1;
	}

	return n * factorial(n - 1);
}

int main(){
	int n = 12;
	printf ("Factorial of %d is %d\n", n, factorial (n));
	return 0;
}
