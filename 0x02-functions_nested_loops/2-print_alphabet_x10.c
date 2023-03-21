#include "main.h"
/**
 *print_alphabet_x10: a function that prints 10 times the alphabet in lowercase followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int j = 1;

	while
		(j <= 10)
	{
		ch = 'a';
		while
			(ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		j++;
	}
}
