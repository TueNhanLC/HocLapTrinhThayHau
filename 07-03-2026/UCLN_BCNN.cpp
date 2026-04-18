#include <bits/stdc++.h>

int UCLN(int a = 0, int b = 0)
{
    while(a!=0)
    {
        if(a>b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int BCNN(int a, int b)
{
    return a*b/UCLN(a, b);
}

int main()
{
    int a = 0, b =0;
    std::cout << "nhap so a"; std::cin >> a;
    std::cout << "nhap so b"; std::cin >> b;
    std::cout << "UCLN cua 2 so" << a << " va " << b << " la: " << UCLN(a, b) << std::endl;
    std::cout << "BCNN cua 2 so" << a << " va " << b << " la: " << BCNN(a, b) << std::endl;
    return 0; 
}