#include "main.h"
/**
* _isupper - A function that checks for uppercase character.
* @c: An input character
* Return: 1 if c is uppercase or 0 otherwi
*/
int _isupper(int c)
{
	int letter, r;

	r = 0;

	letter = 'A';

for (letter = 'A'; letter <= 'Z'; ++letter)
{
if (c == letter)
{
	r = 1;
	break;
}
}
	return (r);
}
