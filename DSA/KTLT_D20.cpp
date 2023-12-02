#include <bits/stdc++.h>
using namespace std;
// bai 1: 1 + 1.2 + 1.2.3 + 1.2.3....N
void hienthiNhan(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i;
        if (i < n)
        {
            cout << ".";
        }
    }
}
void hienthiBai1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        hienthiNhan(i);
        if (i < n)
        {
            cout << " "
                 << "+"
                 << " ";
        }
    }
}
int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n * factorial(n - 1);
}
int bai1(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += factorial(i);
    }
    return sum;
}
void nhapMang(int a[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void merge(int a[], int left, int mid, int right)
{
    vector<int> x(a + left, a + mid + 1);
    vector<int> y(a + mid + 1, a + right + 1);
    int i = 0, j = 0;
    // merge 2 x, y vao a
    while (i < x.size() && j < y.size())
    {
        if (x[i] <= y[j])
        {
            a[left++] = x[i++];
        }
        else
        {
            a[left++] = y[j++];
        }
    }
    // them phan du vao a
    while (i < x.size())
    {
        a[left++] = x[i++];
    }
    while (j < y.size())
    {
        a[left++] = y[j++];
    }
}
void mergeSort(int a[], int left, int right)
{
    if (left >= right)
        return;
    int mid = (left + right) / 2;
    mergeSort(a, left, mid);
    mergeSort(a, mid + 1, right);
    merge(a, left, mid, right);
}
void mergeArray(int a[], int b[], int n, int m)
{
    int arr[m + n], i = 0, j = 0, cnt = 0;
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            arr[cnt++] = a[i++];
        }
        else
        {
            arr[cnt++] = b[j++];
        }
    }
    while (i < n)
    {
        arr[cnt++] = a[i++];
    }
    while (j < m)
    {
        arr[cnt++] = b[j++];
    }
    for (int i = 0; i < m + n; i++)
    {
        cout << arr[i] << " ";
    }
}
int UCLN(int a, int b)
{
    if (a == b)
        return a;
    if (a > b)
        return UCLN(a - b, b);
    else
        return UCLN(a, b - a);
}
int BCNN(int a, int b)
{
    return (a * b) / UCLN(a, b);
}
int BCNN_mang(int a[], int n)
{
    int tmp;
    for (int i = 0; i < n; i++)
    {
        tmp = BCNN(tmp, a[i]);
    }
    return tmp;
}
int main()
{
    // cin >> n;
    int a[100], b[100], n, m;
    // mergeSort(a, 0, 4);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << bai1(n);
    // hienthiBai1(n);
    nhapMang(a, n);
    cout << BCNN_mang(a, n);
    // mergeArray(a, b, n, m);
}