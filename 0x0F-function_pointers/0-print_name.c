/**
 * print_name - prints a name
 * @name: Pointer to name
 * @f: A function pointer that calls a function to print name.
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
