// viet chuong trinh nhap vao 3 so a, b, c 

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3] = {};

    cout << "nhap so a = ";
    cin >> a[0];
    cout << "nhap so b = ";
    cin >> a[1];
    cout << "nhap so c = ";
    cin >> a[2];
    if(a[0] + a[1] > a[2] and a[1] + a[2] > a[0] and a[0]+ a[2] > a[1])
    {
        cout << "3 so lap thanh 3 canh tam giac" << endl;
    }
    else 
    {
        cout << "3 so ko lap thanh 3 canh tam giac" << endl;
    }

}