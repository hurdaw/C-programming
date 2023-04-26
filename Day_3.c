#include <stdio.h>
int odd(int a[100], int n)
{
    int count_o = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            count_o++;
        }
    }
    printf("%d", count_o);
}
// in dãy các số nhỏ hơn top 2
int maxTop2(int a[100], int n)
{
    int max1 = -1e9 - 1, max2 = -1e9 - 1;
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
    for (int i = 0; i < n; i++)
    {
        if (a[i] < max2)
        {
            printf("%d", a[i]);
        }
    }
}
int sodep(int n)
{
    int c1 = 0, c9 = 0;
    while (n)
    {
        int r = n % 10;
        if (r == 1)
            c1 = 1;
        if (r == 9)
            c9 = 1;
        n /= 10;
    }
    return c1 && c9;
}
int checkTraiDauLienKe(int a[100], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (i == 0 && a[0] * a[1] < 0)
        {
            printf("%d ", a[0]);
        }
        else if (i == (n - 1) && a[i - 2] * a[i - 1] < 0)
        {
            printf("%d ", a[i - 1]);
        }
        else if (a[i] * a[i - 1] < 0 || a[i] * a[i + 1] < 0)
        {
            printf("%d ", a[i]);
        }
    }
}
int checkDoiXung(int a[100], int n)
{
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (a[l] != a[r])
            return 0;
        l++;
        --r;
    }
    return 1;
}
int main()
{
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    maxTop2(a, n);
    // int ok = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (sodep(a[i]))
    //     {
    //         printf("%d ", a[i]);
    //         ok = 1;
    //     }
    // }
    // if (!ok)
    //     printf("-1");
    // int kq = checkDoiXung(a, n);
    // if (kq == 1)
    // {
    //     printf("doi xung ");
    // }
    // else
    // {
    //     printf("khong doi xung ");
    // }
}
