#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(1, "0123456789abcdef\n", 17);
	return (0);
}
