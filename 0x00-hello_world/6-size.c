#include <stdio.h>
/**
* main - Prints the size of each variable
* Return: 0 prints sizes
*/
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld bytes(s)\n", sizeof(int));
	printf("Size of a long int: %ld bytes(s)\n", sizeof(long));
	printf("Size of a long long int: %ld bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %ld bytes(s)\n", sizeof(float));
	return (0);
}
