#include "main.h"
/**
 * print_to_98 - Entry point
 * Description: This prints all natural nos from n to 98
 * @n: input number as an int
 * Return: natural values
 */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
_putchar(i);
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else
{
for (i = n; i >= 98; i--)
{
_putchar(i);
if (i != 98)
{
_putchar(',');
}
}
}
_putchar('\n');
}
