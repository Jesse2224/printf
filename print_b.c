#include "main.h"

/**
* print_b - prints an unsigned int i binary notation
* @b: unsigned int i binary
* Return: number of digit printed
*/

int print_b(va_list b)
{
	unsigned int m, e = 2147483648, s, sum = 0;
	unsigned int a[32];
	int count;

	m = va_arg(b, unsigned int);
	a[0] = m / e;
	
	for (s = 1; s < 32; s++)
	{
		e /= 2;
		a[s] = (m / e) % 2;
	}
	for (s = 0; s < 32; s++)
	{
		sum += a[s];
		if (sum || s == 31)
		{
			_putchar('0' + a[s]);
			count++;
		}
	}
	return (count);
}
