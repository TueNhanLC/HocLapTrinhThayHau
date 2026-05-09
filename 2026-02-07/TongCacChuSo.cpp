#include <iostream>
using namespace std;

int main()
{
    int n;
    long long tong = 0;
    cin >> n;


    for (int i = 1; i <= n; i++)
        cout << i;
    cout << endl;

    
    for (int i = 1; i <= n; i++)
    {
        int x = i;
        while (x > 0)
        {
            tong += x % 10;
            x /= 10;
        }
    }

    cout << tong;
    return 0;
}
