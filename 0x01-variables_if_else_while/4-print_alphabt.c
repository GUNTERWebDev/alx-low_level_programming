#include<unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(1, "abcdfghijklmnoprstuvwxyz\n", 25);
	return (0);
}
