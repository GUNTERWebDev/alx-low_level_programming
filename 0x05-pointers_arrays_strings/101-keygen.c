#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - generates random valid password for the program "101-crackme"
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int size = 20;
	char password[size];
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{};:,.<>?";
	const int charset_len = sizeof(charset) - 1;
	int	i;
	srand(time(NULL));

	i = 0;
	while (i < size)
	{
		password[i] = charset[rand() % charset_len];
		i++;
	}
	password[size] = '\0';
	printf("%s\n", password);
	return (0);
}
