// chuong trinh kiem tra so co chia het cho 3 hay khong
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 0;
    cout << "nhap 1 so: " << flush;
    cin >> a;
    if (a%3==0)
    {
        cout << "chia het cho 3" << endl;
    }
    else
    {
        cout << "khong chia het cho 3" << endl;
    }
    return 0;
}