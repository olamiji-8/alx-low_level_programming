#include "main.h"
/**
*print_alphabet - work
*
*Description: prints a-z
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
/**
* print_alphabet_x10 - print a-z
*
*Decription: print a-z 10X
*/
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
print_alphabet();
i++;
}
}
