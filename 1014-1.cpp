/**
 * This program read an positive integer or 0 from user's input.
 * Then caluculate fibonacci's number and print it.
 */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int factorail(int num)
{
    if (num < 0)
    {
        puts("Enter the positive integer!");
        exit(EXIT_FAILURE);
    }
    else if (num == 0)
    {
        return 1;
    }
    else
    {
        return (num * factorail(num - 1));
    }
}
/**
 * This function calculate the fibonacci's number by recursion algorithm.
 * @param num store the number user entered. If num < 0, then terminate the code.
 * @return fibonacci's number.
 */
int fibonacci(int num)
{
    if (num < 0)
    {
        puts("Enter the positive integer!");
        exit(EXIT_FAILURE);
    }
    else if (num < 2) // num == 0 or num == 1
        return num;
    else // num >= 2
        return fibonacci(num - 1) + fibonacci(num - 2);
}
int main()
{
    int num_main = 0;
    scanf("%d", &num_main);

    // printf("%d", factorail(num_main));
    printf("%d", fibonacci(num_main));

    return 0;
}