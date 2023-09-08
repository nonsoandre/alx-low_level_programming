#include <stdio.h>
/**
* main - Entry point
* Return: Always 0
*/
int main(void)
{
char charct;
charct = 'a';
while (charct <= 'z')
{
if (charct != 'e' && charct != 'q')
{
putchar(charct);
}
charct++;
}
putchar('\n');
return (0);
}
