#include <stdio.h>

/**
 * main - Write a program that finds and prints the first 98 Fibonacci numbers,
 *        starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
  int count;
  unsigned long fib1 = 0, fib2 = 1, sum;

  for (count = 0; count < 98; count++)
    {
      sum = fib1 + fib2;
      printf("%lu", sum);

      fib1 = fib2;
      fib2 = sum;

      if (count == 97)
	printf("\n");
      else
	printf(", ");
    }


  return 0;
}
