#include <stdio.h>
/**
*jack_bauer - entry point
*
*Description: this func return some value
*/
void jack_bauer(void)
{
int H = 0, h = 0, m = 0, s = 0;

while (H < 3)
{
while (h < 10)
{
while (m < 6)
{
while (s < 10)
{
putchar('0' + H);
putchar('0' + h);
putchar(':');
putchar('0' + m);
putchar('0' + s);
putchar('\n');
s++;
}
s = 0;
m++;
}
s = 0;
m = 0;
h++;
if (H == 2 && h == 4)
{
break;
H = 4;
}
}
s = 0;
m = 0;
h = 0;
H++;
}
}
