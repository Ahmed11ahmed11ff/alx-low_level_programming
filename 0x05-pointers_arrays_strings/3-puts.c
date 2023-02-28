/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str: the string to print
 */

void _puts(char *str)
{
	while (*ptr != '\0')
	{
		_putchar(*ptr++);
	}
	_putchar('\n');
}
