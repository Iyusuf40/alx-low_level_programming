/**
 * print_name - a function that takes 2 arguments, second argument is a pointer to
 * a function that takes one argument which is the first argument of print_name
 * @name: pointer to a string and first argument
 * @f: pointer to a function 
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
