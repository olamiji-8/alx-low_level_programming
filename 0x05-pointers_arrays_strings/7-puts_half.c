#include "main.h"
/**
*puts_half - A  function that prints half of a string, followed by a new line.
*@str: Arguement
*/
void puts_half(char *str)
{
int i = 0;
while (str[i] != '\0')
{
i++;
}
if (!(i % 2))
{
i = i / 2;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
}
else
{
i = (i - 1) / 2;
i += 1;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
}
_putchar('\n');
}
