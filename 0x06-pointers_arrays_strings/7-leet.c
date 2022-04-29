#include "main.h"
/**
*leet -  a function that encodes a string into 1337.
*@s: first arguement
*Return: s
*/
char *leet(char *s)
{
int i, cd;
char decode[] = {'4', '3', '0', '7', '1'};
char code[] = {'a', 'e', 'o', 't', 'l'};
i = 0;
cd = 0;
while (s[i] != '\0')
{
cd = 0;
while (cd < 5)
{
if ((s[i] == code[cd]) || ((s[i] + 32) == code[cd]))
{
s[i] = decode[cd];
break;
}
cd++;
}
i++;
}
return (s);
}
