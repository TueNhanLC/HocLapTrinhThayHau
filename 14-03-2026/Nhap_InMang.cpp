// nhap va in mang 1 chieu trong c++
#include <iostream>
int nhap(int a[], int n)
{
    for(int i = 0; i<n;i++)
    {
        std::cout << "nhap phan tu thu" << i << " = ";
        std::cin >> a[i] ;
    }
    return 0;
}
int in(int a[], int n)
{
    for(int i = 0; i<n; i++)
    {
        std::cout << a[i] << " ";
        
    }
 
    return 0;
}
int inChan(int a[], int n)
{
    for(int i = 0; i<n; i++)
   { 
    if(a[i]%2==0)
        {
            std::cout << a[i] << " ";
        }
    }
    return 0;
}
int inLe(int a[], int n)
{
    for(int i = 0; i<n; i++)
   { 
    if(a[i]%2!=0)
        {
            std::cout << a[i] << " ";
        }
    }
    return 0;
}

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
int InSoNguyenTo(int a[], int n)
{
    for(int i = 0; i<n; i++)
    {
        if(KTNT(a[i]) == 1)
        {
            std::cout << a[i] << " ";
        }
    }
    return 0;
}
int main()
{
    int a[100], n = 0;
    std::cout << "nhap so luong phan tu cua mang: ";
    std::cin >> n;
    nhap(a, n);
    std::cout << "mang vua nhap la " << std::endl;
    in(a,n);
    std::cout << std::endl;
    std::cout << "cac so chan trong mang la " << std::endl;
    inChan(a,n);
    std::cout << std::endl;
    std::cout << "cac so le trong mang la" << std::endl;
    inLe(a,n);
    std::cout << std::endl;
    std::cout << "cac so nguyen to trong mang la" << std::endl;
    InSoNguyenTo(a,n);
    return 0;
}
