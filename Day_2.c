#include <stdio.h>
int imin(int a[100], int n)
{
    int min = 1e9 + 1, index;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            index = i;
        }
    }
    return index;
}
int imax(int a[100], int n)
{
    int max = -1e9 - 1, index;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            index = i;
        }
    }
    return index;
}
// top 2 in array
int max2(int a[100], int n)
{
    int max2 = -1e9 - 1, max1 = -1e9 - 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i] > max2)
        {
            max2 = a[i];
        }
    }
    printf("%d %d\n", max1, max2);
}
int main()
{
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d\n", imin(a, n));
    printf("%d\n", imax(a, n));
    max2(a, n);
}