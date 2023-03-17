#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <stdio.h>
/**
 *main - a program that print out lower case alphabeth and uppercase
 *Return: 0 (Success)
 */

int main(void)
{
char c;
char d;

c = 'a';
d = 'A';
while
	(c <= 'z')
	{
		putchar(c);
		c++;
	}
while
	(d <= 'z')
	{
		putchar(c);
		d++;
	}
return (0);
}
