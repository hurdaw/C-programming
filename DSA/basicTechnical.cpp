#include <bits/stdc++.h>
using namespace std;
int a[100];
// bài 1: hàm ghi data nếu có -1 thì dừng việc ghi
// A. Xác định phải dãy tăng hay k?
// B. Số lượng phần tử của mảng khi loại bỏ số không phải số nguyên tố
// C. Hiển thị các số còn lại
void dataReceive(int a[], int &size)
{
    int i = 0, input;
    while (1)
    {
        cin >> input;
        if (input == -1)
            break;
        a[i] = input;
        i++;
    }
    size = i;
}
void nhapMang(int a[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
// A.
bool dayTang(int a[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        if (a[i] > a[i + 1])
            return false;
    }
    return true;
}
// kiểm tra số nguyên tố
bool prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void deleting(int a[], int &size, int k)
{
    for (int i = k + 1; i < size; i++)
    {
        a[i - 1] = a[i];
    }
    size--;
}
// Buổi 1
// bài 1: nhập 1 chuỗi kí tự từ bàn phím và in ra chuỗi này
void nhapXuatChuoi(char a[])
{
    gets(a);
    // puts(a);
}
// bài 2: tổng các số từ 1=>n;
int sum(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum += i;
    }
    return sum;
}
int fibo(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}
void printFibo(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << fibo(i) << " ";
    }
}
// đảo kí tự
void daoChuoi(char s[])
{

    for (char i = strlen(s) - 1; i >= 0; i--)
    {
        cout << s[i];
    }
}
int max(int a[], int size)
{
    int max = -1e9;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}
void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
bool palidromeString(char s[])
{
    char left[10], right[10];
    for (int i = 0; i < strlen(s); i++)
    {
        left[i] = s[i];
    }
    // left[strlen(s)] = '\0';
    int j = 0;
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        right[j++] = s[i];
    }
    // right[strlen(s)] = '\0';
    if (strcmp(left, right) == 0)
    {
        return true;
    }
    return false;
}
// Buổi 2:
void fiboLoop(int n)
{
    int n1 = 0, n2 = 1, n3;
    cout << n1 << " " << n2 << " ";
    for (int i = 2; i <= n; i++)
    {
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }
}
int prefixSum(int a[], int n)
{
    int prefix[100], sum = 0;
    prefix[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }
    return prefix[n - 1];
}
void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
void quickSortHoare(int a[], int left, int right)
{
    int x, i, j;
    // gán i, j và tìm pivot
    i = left, j = right, x = a[(left + right) / 2];
    while (i < j)
    {
        while (a[i] < x)
            i++;
        while (x < a[j])
            j--;
        if (i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (left < i)
        quickSortHoare(a, left, j);
    if (i < right)
        quickSortHoare(a, i, right);
}
//  Tìm dãy con liên tiếp có tổng lớn nhất trong một mảng số nguyên bằng cách sử dụng kỹ thuật prefix sums.
// 1 2 3 34 52 33 8 9
int fibonacci(int n)
{
    // Trường hợp cơ bản: n = 0 hoặc n = 1
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        // Đệ quy: F(n) = F(n-1) + F(n-2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
// 1 1 2 3 5 
void printfibonacci(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }
}
int main()
{
    char s[100];
    int n;
    // input
    // int size = 0;
    // dataReceive(a, size);
    // int kq = dayTang(a, size);
    // cout << kq;
    // nhapXuatChuoi(s);
    // cout << sum(6);
    // printFibo(5);
    // daoChuoi(s);
    // nhapMang(a, n);
    // cout << "Max: " << max(a, n);
    // bubbleSort(a, n);
    // cout << palidromeString(s);
    // fiboLoop(10);
    // cout << prefixSum(a, n);
    // cout << dayTang(a, n);
    quickSortHoare(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}