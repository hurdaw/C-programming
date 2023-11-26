#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
void nhapMang(int *a, int *n)
{
    *n = 0;
    scanf("%d", n);
    for (int i = 0; i < *n; i++)
    {
        scanf("%d", &a[i]);
    }
}
int nhapK(int n)
{
    // int k = -1;
    // while (k < 0 || k >= n)
    // {
    //     scanf("%d", &k);
    // }
    // return k;
    scanf("%d", &n);
    return n;
}
int insert(int *a, int *n, int k, int x)
{
    scanf("%d", &x);
    for (int i = *n; i > k; i--)
    {
        a[i] = a[i - 1];
    }
    a[k] = x;
    (*n)++;
    for (int i = 0; i < *n; i++)
    {
        printf("%d ", a[i]);
    }
}
int delete(int *a, int *n, int k)
{
    for (int i = k + 1; i < *n; i++)
    {
        a[i - 1] = a[i];
    }
    (*n)--;
    for (int i = 0; i < *n; i++)
    {
        printf("%d ", a[i]);
    }
}
// 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97
int prime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int printPrime(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (prime(a[i]))
        {
            printf("%d ", a[i]);
        }
    }
}
int sieveOfPrimesEratosthenesint(int *a, int n)
{
    for (int i = 0; i <= n; i++)
    {
        a[i] = 1;
        a[0] = a[1] = 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (a[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                a[j] = 0;
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        if (a[i])
        {
            printf("%d ", i);
        }
    }
}
int frequency(int *a, int *b, int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    for (int i = 0; i <= max; i++)
    {
        b[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        b[a[i]]++;
    }
    for (int i = 0; i <= max; i++)
    {
        if (b[i] > 0)
        {
            printf("%d - %d; ", i, b[i]);
        }
    }
}
int frequencyByHashtable(int *a, int n)
{
    int b[100] = {0};
    for (int i = 0; i < n; i++)
    {
        b[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (b[a[i]] != 0)
        {
            printf("\n%d - %d; ", a[i], b[a[i]]);
            b[a[i]] = 0;
        }
    }
}
int checkDonDieu(int *a, int n)
{
    int check1 = 1, check2 = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            check1 = 0;
        }
        if (a[i] > a[i + 1])
        {
            check2 = 0;
        }
    }
    if (check1 || check2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
int gopMang(int *a, int *b, int *c, int n, int *nb)
{
    int nc = 0;
    scanf("%d", nb);
    for (int i = 0; i < *nb; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
        // printf("c[%d] = %d \n", i, c[i]);
        nc++;
    }
    for (int i = 0; i < *nb; i++)
    {
        c[i + n] = b[i];
        // printf("c[%d] = %d \n", i, c[i]);
    }
    nc += *nb;
    for (int i = 0; i < nc; i++)
    {
        for (int j = i + 1; j < nc; j++)
        {
            if (c[j] < c[i])
            {
                int tmp = c[j];
                c[j] = c[i];
                c[i] = tmp;
            }
        }
        printf("%d ", c[i]);
    }
}
// tối ưu code trên bằng qsort
int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
    /*
        dùng 2 con trỏ a, b để trỏ vào 2 phần tử trong một mảng và trả về 1 số nguyên:
            +a<b==-;
            +a=b==0;
            +a>b==+;
    */
}
int gopMang2(int *a, int *b, int *c, int n, int nb)
{
    memcpy(c, a, n * sizeof(int));      // copy a vào c
    memcpy(c + n, b, nb * sizeof(int)); // copy b vào c

    int nc = n + nb;

    qsort(c, nc, sizeof(int), cmp);
    /*
    c: trỏ đến phần tử đầu tiên của mảng cần sắp xếp.
    nc: số lượng phần tử trong mảng.
    sizeof(int): kích thước mỗi phần tử của mảng.
    cmp: con trỏ đến hàm so sánh được sử dụng để so sánh các phần tử trong mảng.
    */
    for (int i = 0; i < nc; i++)
    {
        printf("%d ", c[i]);
    }
}
int sumMang2Chieu(int d[100][100], int *v, int *y)
{
    int sum = 0;
    scanf("%d%d", v, y);
    for (int i = 0; i < *v; i++)
    {
        for (int j = 0; j < *y; j++)
        {
            scanf("%d", &d[i][j]);
            sum += d[i][j];
        }
    }
    printf("%d ", sum);
}
int main()
{
    int a[100], b[100], c[100], d[100][100], n, k, x, nb, v, y;
    nhapMang(a, &n);
    //  scanf("%d", &n);
    //  sieveOfPrimesEratosthenesint(a, n);
    //   k = nhapK(n);
    //   insert(a, &n, k, x);
    //   delete (a, &n, k);
    //   printPrime(a, n);
    //  frequency(a, b, n);
    //  frequencyByHashtable(a, n);
    //  checkDonDieu(a, n);
    //  gopMang(a, b, c, n, &nb);
    //  gopMang2(a, b, c, n, nb);
    // sumMang2Chieu(d, &v, &y);
}