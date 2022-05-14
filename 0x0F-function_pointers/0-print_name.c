#include "function_pointers.h"

/**
 * print_name- this functions prints a name
 * a blank line
 * @name: string to print.
 * @f: this a function pointer, that recieves a string.
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
(*f)(name);
}
