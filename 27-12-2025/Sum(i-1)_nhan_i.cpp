#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0, s = 0;
    cout << "vui long nhap n =  "; cin >> n;
    for(int i = 1; i <= n; i++)
    {
        s += (i-1)*i;
    }
    cout << "tong la: " << s << endl;
    return 0;
}