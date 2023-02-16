#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 1 (Error code)
 */
int main(void)
{
	const char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = sizeof(str) - 1;
	ssize_t written = write(STDERR_FILENO, str, len);
	if (written != len)
		return (1);
			return (0);
}
