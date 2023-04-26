#include <stdio.h>
int sortArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                int tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
        printf("%d ", a[i]);
    }
}
void maxArray(int *a, int n)
{
    int max = -1e9 - 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("%d ", max);
}
int countOdd(int *a, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            count++;
        }
    }
    printf("%d", count);
}
int main()
{
    int n, a[100], b[100], n1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // scanf("%d", &n1);
    // for (int i = 0; i < n1; i++)
    // {
    //     scanf("%d", &b[i]);
    // }
    // sortArray(a, n);
    // maxArray(a, n);
    // maxArray(b, n1);
    countOdd(a, n);
}