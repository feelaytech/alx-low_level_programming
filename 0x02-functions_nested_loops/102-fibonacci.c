#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0 (Success)
 */
int main(void)
{
int fib1 = 1, fib2 = 2, nextFib, count = 0;
printf("%d, %d, ", fib1, fib2);
count = 2;
while (count < 50)
{
nextFib = fib1 + fib2;
printf("%d", nextFib);
if (count != 49)
{
printf(", ");
}
fib1 = fib2;
fib2 = nextFib;
count++;
}
printf("\n");
return (0);
}
