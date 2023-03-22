#include "function_pointers.h"
/**
 * print_name - prints a name using another function
 * @name: name to print
 * @f: function to use to print name
 *
 * Return: Void ALWAYS
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
