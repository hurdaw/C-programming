#include <bits/stdc++.h>
using namespace std;
void nhapMang(int a[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
void selectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        swap(a[i], a[min]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j + 1], a[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
void insertionSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int pos = i - 1, x = a[i];
        while (pos >= 0 && x < a[pos])
        {
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = x;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
void countingSort(int a[], int n)
{
    int max = -1e9;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    int cnt[max];
    for (int i = 0; i <= max; i++)
    {
        cnt[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cnt[a[i]]++;
    }
    for (int i = 0; i <= max; i++)
    {
        if (cnt[i] != 0)
        {
            for (int j = 0; j < cnt[i]; j++)
            {
                cout << i << " ";
            }
        }
    }
}
void quickSortHoare(int a[], int left, int right)
{
    int i = left, j = right, x = a[(left + right) / 2];
    while (i < j)
    {
        while (a[i] < x)
            i++;
        while (x < a[j])
            j--;
        if (i >= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (left < j)
    {
        quickSortHoare(a, left, j);
    }
    if (i > right)
    {
        quickSortHoare(a, i, right);
    }
}
void mergeArray(int a[], int n, int b[], int m)
{
    int i = 0, j = 0, cnt[m + n], index = 0;
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            cnt[index++] = a[i++];
        }
        else
        {
            cnt[index++] = b[j++];
        }
    }
    while (i < n)
    {
        cnt[index++] = a[i++];
    }
    while (j < m)
    {
        cnt[index++] = b[j++];
    }
    for (int i = 0; i < n + m; i++)
    {
        cout << cnt[i] << " ";
    }
}
int main()
{
    int a[100], b[100], n, m;
    nhapMang(a, n);
    // selectionSort(a, n);
    // cout << endl;
    // bubbleSort(a, n);
    // cout << endl;
    // insertionSort(a, n);
    // cout << endl;
    // countingSort(a, n);
    // cout << endl;
    quickSortHoare(a, 0, n - 1);
    // cout << endl;
    // nhapMang(b, m);
    // mergeArray(a, n, b, m);
}