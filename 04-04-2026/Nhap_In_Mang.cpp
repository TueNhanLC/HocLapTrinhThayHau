#include <iostream>

int KTNT(int n)
{
    if (n < 2) return 0; 
    int dem = 0;
    for(int i = 1; i <= n; i++) 
    {
        if(n % i == 0)
        {
            dem++;
        }
    }
    
    if (dem == 2) return 1; 
    else return 0;
}

int KTNT_Trong_Mang(int a[], int n)
{
    int so_nguyen_to = 0;
    for(int i = 0; i<n;i++)
    {
        if(KTNT(a[i]) == 1)
        {
            so_nguyen_to++;
        }
    }
    return so_nguyen_to;
}

void NhapMang(int a[], int n)
{
    for(int i = 0; i<n; i++)
    {
        std::cout << "nhap phan tu thu " << i << " ";
        std::cin >> a[i];
    }
}

void xuatMang(int a[], int n = 0)
{
    for(int i = 0; i<n; i++)
    {
        std::cout << a[i] << " ";
    }
}

int DemChan(int a[], int n)
{
    int dc= 0;
    for(int i = 0; i<n; i++)
    {
        if(a[i]%2==0){dc++;}
    }
    return dc;
}

int DemSD(int a[], int n)
{
    int dd = 0;
    for(int i =0; i<n; i++)
    {
        if(a[i]>0) {dd++;}
    }
    return dd;
}

int main()
{
    int n = 0, a[100];
    std::cout << "Nhap N = "; std::cin >> n;
    NhapMang(a, n);
    std::cout << "Mang vua nhap la: " ;
    xuatMang(a, n);
    std::cout << std::endl;
    std::cout << "so luong so chan trong mang"  << DemChan(a, n);
    std::cout << std::endl;
    std::cout << "so luong so duong trong mang: " << DemSD(a, n);
    std::cout << std::endl;
    std::cout << "so luong so nguyen to trong mang: " << KTNT_Trong_Mang(a, n);
    return 0;
}