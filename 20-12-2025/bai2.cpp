#include <iostream>

int main()
{
    int n = 0, tong = 0;
    std::cout << "n = "; std::cin >> n;
    for (int i = 1; i <=n; i++)
    {
        if (i % 2 == 0)
        {
            tong += i;
        }
    }
    std::cout << "tong la: " << tong << std::endl;
    return 0;
}