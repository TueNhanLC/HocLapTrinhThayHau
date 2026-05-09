#include <bits/stdc++.h>
using namespace std;

int main()
{
    int so_input[3] = {}, so_lon_nhat;

    cout << "nhap so a = ";
    cin >> so_input[0];
    cout << "nhap so b = ";
    cin >> so_input[1];
    cout << "nhap so c = ";
    cin >> so_input[2];

    so_lon_nhat = so_input[0];
    for (int i = 1; i < 3; i++)
    {
        if (so_input[i] > so_lon_nhat)
        {
            so_lon_nhat = so_input[i];
        }
    }

    cout << "so lon nhat la: " << so_lon_nhat;
    return 0;
}
