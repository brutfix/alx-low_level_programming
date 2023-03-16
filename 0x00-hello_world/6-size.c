#include<stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of char: %zu bytes\n" sizeof(a));
	printf("Size of int: %zu bytes\n" sizeof(b));
	printf("Size of long int: %zu bytes\n" sizeof(c));
	printf("Size of long long int: %zu bytes\n" sizeof(d));
	printf("Size of float: %zu bytes\n" sizeof(f));

	return (0);
}
