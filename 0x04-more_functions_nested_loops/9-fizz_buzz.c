#include <stdio.h>
/**
*main - main extry poin of the program
*Return: returns the value 0 always
*/
int main(void)
{
int fizz;
char *f = "Fizz";
char *b = "Buzz";
for (fizz = 1; fizz <= 100; fizz++)
{
if (fizz % 3 == 0 && fizz % 5 == 0)
{
printf("%s%s", f, b);
}
else if (fizz % 5 == 0)
{
printf("%s", b);
}
else if (fizz % 3 == 0)
{
printf("%s", f);
}
else
{
printf("%i", fizz);
}
if (fizz != 100)
{
putchar(' ');
}
}
putchar('\n');
return (0);
}
