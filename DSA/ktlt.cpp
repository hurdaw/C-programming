#include <bits/stdc++.h>
using namespace std;
int a[100], n;
void nhapMang(int a[], int &n)
{
    cout << "nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void daoChuoi(char s[])
{
    gets(s);
    string x;
    for (char i = strlen(s) - 1; i >= 0; i--)
    {
        x.push_back(s[i]);
    }
    for (char i = 0; i < strlen(s); i++)
    {
        cout << x[i];
    }
}
void findMax(int a[])
{
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    cout << max;
}
int main()
{
    char s[10];
    int a[] = {2, 5, 3, 223, 123};
    // daoChuoi(s);
    // findMax(a);
    int x = 30, y = 9;
    int kq = ~x;
    // cout << kq;
    int num = 212;
    // dich phai la chia: kq= n/(2^x)
    for (int i = 1; i <= 10; i++)
    {
        cout << "dich phai " << i << "bits: " << (num >> i) << endl;
    }
    // dich trai la nhan: kq= n*(2^x)
    // for (int i = 1; i <= 5; i++)
    // {
    //     cout << "dich trai " << i << "bits: " << (num << i) << endl;
    // }
}