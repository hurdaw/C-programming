#include <stdio.h>
int bubbleSort(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                int tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
        printf("%d ", a[i]);
    }
}
int checktang(int a[100], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] >= a[i + 1])
            return 0;
    }
    return 1;
}
// c1
int printSoLonHonSoTr(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        int ok = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[i])
            {
                ok = 0;
                break;
            }
        }
        if (ok)
            printf("%d ", a[i]);
    }
}
// c2
int insolonhonsotr(int a[100], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= max)
        {
            printf("%d ", a[i]);
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }
}
int main()
{
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}