#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list log;
	unsigned int i;
	char *str;

	va_start(log, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(log, char *);

		if (str)
			printf("%s", str);
		else
			printf("(none)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	
	va_end(log);

printf("\n");
}
