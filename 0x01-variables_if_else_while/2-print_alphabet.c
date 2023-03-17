#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <stdio.h>
/**
 *main - a program that print out lower case alphabeth
 *Return: 0 (Success)
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
{
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
