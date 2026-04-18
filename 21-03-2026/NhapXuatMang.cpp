#include <iostream>
#include <math.h>

void nhap_phan_tu(int n, int A[])
{
    for(int i = 0; i < n; i++)
    {
        std::cout << "nhap phan tu thu " << i << " : ";
        std::cin >> A[i];
        std::cout << std::endl;
    }
}

void xuat_phan_tu(int n, int A[])
{
    for(int i = 0; i <n; i++)
    {
        std::cout << A[i] << " ";
        
    }
}

int KiemTraHH(int n)
{
    int s = 0;
    for(int i = 1; i<=n; i++)
    {
        if(n%i==0)
        {
            s +=i;
        }
        
    }
    if(s=n+n){return 1;}
    else {return 0;}
    
}



void InHoanHao(int n, int A[])
{
    for(int i = 0; i<n; i++)
    {
        if(KiemTraHH(A[i]) == 1)
        {
            std::cout << A[i] << " ";
        }
    }
}

int KiemTraChinhPhuong(int n)
{
    int x = sqrt(n);
    x = (int)x;
    return x * x == n;
}

int InSoChinhPhuong(int A[], int n)
{
    for(int i = 2; i<n; i++)
    {
        if(KiemTraChinhPhuong(A[i]))
        {
            std::cout << A[i] << " ";
        }
    }
    return 0;
}

int main()
{
    int A[100]; int n= 0;
    std::cout << "nhap n = ";
    std::cin >> n;
    nhap_phan_tu(n, A);
    std::cout << "mang vua nhap la: ";
    xuat_phan_tu(n, A); 
    std::cout << std::endl;
    std::cout << "cac so hoan hao trong mang la: ";
    InHoanHao(n, A); 
    std::cout << std::endl;
    std::cout << "cac so chinh phuong trong mang la: ";
    InSoChinhPhuong(A, n);

    return 0;
}