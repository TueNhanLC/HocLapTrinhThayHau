#include <iostream>
using namespace std;

bool SoNguyenTo(int n)
{
    if (n < 2) return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int a = 0, tong = 0;
    cout << "a = ";
    cin >> a;

    for (int i = 2; i <= a; i++)
    {
        if (SoNguyenTo(i))
            tong += i;
    }

    cout << "tong la: " << tong << endl;
    return 0;
}
