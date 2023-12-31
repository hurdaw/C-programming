#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
void quickSortHoare(int a[], int left, int right)
{
    if(left>=right){
        return;
    }
    int x, i, j;
    // gán i, j và tìm pivot
    i = left, j = right, x = a[(left + right) / 2];
    while (i < j)
    {
        while (a[i] < x)
        {
            i++;
        }

        while (a[j] > x)
        {
            j++;
        }

        if (i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }

    quickSortHoare(a, left, j);

    quickSortHoare(a, i, right);
}
int main()
{
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quickSortHoare(a, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}