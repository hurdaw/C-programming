#include <stdio.h>

int main()
{
    int n, divisor = 1, total = 0;
    scanf("%d", &n);
    if (n <= 0)
    {
        total = 0;
    }
    while (divisor < n)
    {
        if (n % divisor == 0)
        {

            total += divisor;
        }
        divisor += 1;
    }
    printf("%d", total);
}