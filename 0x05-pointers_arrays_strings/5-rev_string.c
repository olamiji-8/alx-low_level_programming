#include "main.h"
/**
*rev_string - function that reverses a string.
*@s: Arguement that is parsed
*/

void rev_string(char *s)
{
char c[500];

int length, f;
f = 0;

length = 0;

while (s[length] != '\0')
{
length++;
}
length -= 1;

for (; length >= 0; length--)
{
c[f] = s[length];
f++;
}
f -= 1;
while (c[f] != '\0')
{
char *p = &s[f];
*p = c[f];
f--;
}
}
