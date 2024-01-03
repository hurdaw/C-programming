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
bool sentinel(int a[], int n)
{
    int x;
    cin >> x;
    // a[n] = x;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            if (i < n)
            {
                return true;
            }
        }
    }
    return false;
}

bool flag(int a[], int n)
{
    int x;
    cin >> x;
    bool flagg = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            flagg = true;
        }
    }
    if (flagg)
        return true;
    else
        return false;
}
void soSangKitu()
{
    for (int i = 48; i <= 122; i++)
    {
        cout << i << " " << char(i) << endl;
    }
}
// mảng đánh dấu trạng thái
bool isPrime(int n)
{
    if (n == 1 || n == 0)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void coutPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}
// tổ hợp của k chập n
int toHop(int n, int k)
{
    if (k == 0 || k == n)
        return 1;
    else
        return toHop(n - 1, k - 1) + toHop(n - 1, k);
}
// 15
int dec_to_bin(int n)
{
    int sum = 0, i = 1, x;
    while (n != 0)
    {
        x = n % 2;
        sum += (i * x);
        n /= 2;
        i *= 10;
    }
    return sum;
}
void dec_to_bin_2(int n)
{
    if (n < 2)
    {
        cout << n;
    }
    else
    {
        dec_to_bin_2(n / 2);
        cout << n % 2;
    }
}
// đếm số chữ số của 1 số
int numOfNums(long long n)
{
    if (n < 10)
        return 1;
    return numOfNums(n / 10) + 1;
}
int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return factorial(n - 1) * n;
}
// tổng chữ số của N
int sumOfN(long long n)
{
    if (n < 10)
    {
        return n;
    }
    else
    {
        return n % 10 + sumOfN(n / 10);
    }
}
int pow(int a, int n)
{
    if (n == 0)
        return 1;
    return a * pow(a, n - 1);
}
int binarySearch(int a[], int x, int n)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] == x)
            return mid;
        if (x < a[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }
}
// 5 3 1 2  8  9
// 5 8 9 11 19 28
void prefixSum(int a[], int n, int x)
{
    int prefix[n];
    prefix[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }
    cout << prefix[x];
}
bool ktrSoKhongLapLai(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                return false;
            }
        }
    }
    return true;
}
// Tìm số lớn nhất không lặp lại trong một dãy số sử dụng kỹ thuật prefix sums.

int main()
{
    int a[100], n, cnt[100] = {0};
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        int n;
        do
        {
            n = rand() % 10 + 1;
        } while (cnt[n - 1] == 1);
        cnt[n - 1] = 1;
        cout << n << " ";
    }
}