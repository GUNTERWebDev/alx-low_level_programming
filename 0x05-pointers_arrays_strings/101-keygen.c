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
	char password[15];
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	const int charset_len = sizeof(charset) - 1;
	int	i;
	srand(time(NULL));

	i = 0;
	while (i < 15)
	{
		password[i] = charset[rand() % charset_len];
		i++;
	}
	password[15] = '\0';
	printf("Random Password: %s\n", password);
	return (0);
}
