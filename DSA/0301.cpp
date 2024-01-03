#include <iostream>
#include <cmath>
using namespace std;
double giaithua(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * giaithua(n - 1);
    }
}
double taylor(double x, int n)
{
    double ketqua = 0.0;
    int sign = 1;
    for (int i = 0; i < n; ++i)
    {
        ketqua += sign * pow(x, 2 * i + 1) / giaithua(2 * i + 1);
        sign *= -1;
    }
    return ketqua;
}
int main()
{
    double x, y;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap do chinh xac: ";
    cin >> y;
    int n = 0;
    double k = taylor(x, n);
    while (abs(k - sin(x)) > y)
    {
        n++;
        k = taylor(x, n);
    }
    cout << "sin(" << x << ") xap xi voi do chinh xac " << y << " la: " << k << endl;
    return 0;
}
