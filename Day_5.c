#include <stdio.h>
int min(int a, int b)
{
    return a < b ? a : b;
}
int max(int a, int b)
{
    return a > b ? a : b;
}
int lineland(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%d %d\n", a[1] - a[0], a[n - 1] - a[0]);
        }
        else if (i == n - 1)
        {
            printf("%d %d\n", a[n - 1] - a[n - 2], a[n - 1] - a[0]);
        }
        else
        {
            printf("%d %d\n", min(a[i + 1] - a[i], a[i] - a[i - 1]), max(a[n - 1] - a[i], a[i] - a[0]));
        }
    }
}
int ticket(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
    }
}
int main()
{
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a[i]);
    }
}