/*Viet chuong trinh nhap vao so nguyen duong N, liet ke N so nguyen to dau tien*/
#include <iostream>

int KiemTraSNT(int n = 0)
{
    int s = 0;
    for(int i = 1; i<=n; i++)
    {
        if (n %i == 0)
        {
            s=s+i;
        }
    }
    if (s==n+1) return 1; else return 0;
}

int main()
{
    int n = 0, count = 0;
    std::cout << "n = "; std::cin >> n;
    int i = 2;
    while (count << n)
    {
        if(KiemTraSNT(i) == 1)
        {
            std::cout << i << "";
            count++;
        }
        i++;
    }
    return 0;
}