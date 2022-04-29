#include <stdio.h>
/**
*main - pirnt the highest factor of 612852475143
*Return: returns the value
*/
int main(void)
{
long num, max, i;
num = 612852475143;
max = 1;
while (num % 2 == 0)
{
num /= 2;
max = num;
}
for (i = 3; i <= num; i += 2)
{
if (num % i == 0)
{
max = i;
num /= i;
}
}
printf("%lu\n", max);
return (0);
}
