#include <stdio.h>
void sortIncrease(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                min = j;
            }
        }
        int tmp = a[i];
        a[i] = a[min];
        a[min] = tmp;
        printf("%d ", a[i]);
    }
}
void sortDecrease(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        int max = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                max = j;
            }
        }
        int tmp = a[i];
        a[i] = a[max];
        a[max] = tmp;
        printf("%d ", a[i]);
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
    sortIncrease(a, n);
    printf("\n");
    sortDecrease(a, n);
}