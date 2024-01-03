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
// 10
// 0  1  2  3  4  5  6  7  8  9 
// 37 37 45 22 11 12 46 45 37 27 
void merge2(int a[], int l, int m, int r)
{
    int leftSize = m - l + 1;
    int rightSize = r - m;
    int left[leftSize], right[rightSize];
    for (int i = 0; i < leftSize; i++)
    {
        left[i] = a[l + i]; // Sao chép các phần tử vào mảng left
    }

    for (int i = 0; i < rightSize; i++)
    {
        right[i] = a[m + 1 + i]; // Sao chép các phần tử vào mảng right
    }
    int i = 0, j = 0;
    while (i < leftSize && j < rightSize)
    {
        if (left[i] <= right[j])
        {
            a[l++] = left[i++];
        }
        else
        {
            a[l++] = right[j++];
        }
    }
    while (i < leftSize)
    {
        a[l++] = left[i++];
    }
    while (j < rightSize)
    {
        a[l++] = right[j++];
    }
}
void mergeSort(int a[], int left, int right)
{
    if (left >= right)
        return;
    int mid = (left + right) / 2;
    // int mid = left + (right - left) / 2;
    mergeSort(a, left, mid);
    mergeSort(a, mid + 1, right);
    merge2(a, left, mid, right);
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
int UCLN2(int a, int b)
{
    if (b == 0)
        return a;
    else
        return UCLN2(b, a % b);
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
int DtoB(int n)
{
    int x, sum = 0, i = 1;
    while (n != 0)
    {
        // 15
        // x=1
        // s=1
        // n=7
        x = n % 2;
        sum += (i * x);
        n /= 2;
        i *= 10;
    }
    return sum;
}
// Đề 2
// Bài 1: cho 1 số nguyên dương, tìm ước số lẻ lớn nhất
int ULMax(int &n)
{
    cin >> n;
    int max = -1e9;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && i % 2 != 0)
        {
            if (i > max)
                max = i;
        }
    }
    return max;
}
void nhapTamGiac(float &a, float &b, float &c)
{
    cout << "nhap canh a: ";
    cin >> a;
    cout << "nhap canh b: ";
    cin >> b;
    cout << "nhap canh c: ";
    cin >> c;
}
void checkTypeTriangle(float a, float b, float c)
{

    if (a == b && a == c)
    {
        cout << "tam giac deu";
    }
    else if (a == b || a == c || b == c)
    {
        cout << "tam giac can";
    }
    else if ((a == sqrt((pow(b, 2) + pow(c, 2)))) || (b == sqrt((pow(a, 2) + pow(c, 2)))) || (c == sqrt((pow(a, 2) + pow(b, 2)))))
    {
        cout << "tam giac vuong";
    }
    else
    {
        cout << "tam giac thuong";
    }
}
float dienTichTamGiac(float a, float b, float c)
{
    float s, p = (a + b + c) / 2.0f;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    return s;
}
void nhapN(int &n)
{
    cin >> n;
}

int main()
{
    int a[100], b[100], n, m;
    nhapMang(a, n);
    mergeSort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}