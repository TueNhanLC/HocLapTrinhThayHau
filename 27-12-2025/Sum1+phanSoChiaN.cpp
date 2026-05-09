/*S = 1-1/2+1/3-1/4+1/5-1+...+1/n */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double s = 0;
    int n = 0;
    cout << "nhap n: "; cin >> n;
    for (int i = 1 ; i<=n ; i++)
    {
        if(i % 2 == 0)
        {
            s+=(double)1/i;
        }
        else
        {
            s-=(double)1/i;
        }
    }
    cout << "tong la: " << s << endl;
    return 0;
}