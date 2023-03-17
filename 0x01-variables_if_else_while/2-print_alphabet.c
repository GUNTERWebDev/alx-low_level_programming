#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 28);
	return (0);
}
