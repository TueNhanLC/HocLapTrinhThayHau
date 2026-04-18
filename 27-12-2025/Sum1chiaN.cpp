/*1+ 1/2 + 1/3 + 1/4 +...+ 1/n*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double s = 0;
    int n = 0;
    std::cout << "nhap so n =  "; std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        s+=(double)1/i;
    }
    std::cout << "tong la: " << s << endl;
    return 0;
}