#include <iostream>

int main()
{
    int n = 0, tong = 0;
    std::cout << "nhap so n: "; std::cin >> n;
    for (int i = 1; i<=n; i++)
    {
        tong += i; 
    }
    std::cout << "tong: " << tong << std::endl;  
    return 0;
}