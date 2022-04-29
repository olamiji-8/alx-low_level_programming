#include "main.h"
/**
*print_alphabet - function for printing a-z
*
*Decription: returns the alphabets
*/
void print_alphabet(void)
{
int i;
char letter = 'a';
for (i = 0; i < 26; i++)
{
_putchar(letter + i);
}
_putchar('\n');
}
