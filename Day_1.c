// array
// min max in array by function
#include <stdio.h>
int max(int a[100], int n)
{
    int max = -1e9 - 1;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}
int min(int a[100], int n)
{
    int max = a[0], min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    return min;
}
// odd and even
int oae(int a[100], int n)
{
    int count_e = 0, count_o = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            count_e++;
        }
        else
        {
            count_o++;
        }
    }
    printf(" %d %d ", count_e, count_o);
}
int main()
{
    int a[100], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d ", max(a, n));
    printf("%d ", min(a, n));
    oae(a, n);
}
