#include <iostream>
#include <math.h>
#include <iterator>

bool KiemTraChinhPhuong(int n = 0)
{
    int a = 0;
    a = sqrt(n);
    return n == a;
}

bool isPerfect(int n) {
    // Số hoàn hảo phải là số nguyên dương lớn hơn 1
    if (n <= 1) return false;

    int sum = 1; // 1 luôn là ước của mọi số dương
    
    // Tối ưu: Chỉ duyệt đến căn bậc hai của n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            if (i * i != n) {
                sum += i + (n / i); // Cộng cả cặp ước
            } else {
                sum += i; // Nếu là số chính phương thì chỉ cộng một lần
            }
        }
    }

    return sum == n;
}

int DemSoHoanHao(int n, int a[])
{
    int SoSHH = 0; // bien dung de dem so luong cac so hoan hao
    for(int i = 0; i<n; i++)
    {
        if(isPerfect(a[i]))
        {
            SoSHH += 1;
        }
    }
    return SoSHH;
}

int TongSoChinhPhuong(int n = 0, int a[] = {0})
{
    int tong = 0;
    for(int i = 0; i<n; i++)
    {
        if(KiemTraChinhPhuong(a[i]))
        {
            tong = tong + a[i];
        }
    }
    return tong;
}


void NhapMang(int a[], int n)
{
    for(int i = 0; i<n; i++)
    {
        std::cout << "nhap phan tu thu " << i << " ";
        std::cin >> a[i];
    }
}
void xuatmang(int n = 0, int a[] = {0})
{
    for(int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }
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
    
    if (dem == 2) return 1; // so nguyen to thi bang 1
    else return 0;
}

int TimSoNGuyenTo(int n = 0, int a[] = {0})
{
    int ViTri = 0;
    // tra ve vi tri dau tien cua so nguyen to trong mang
    for(int i =0; i<n;i++)
    {
        if(KTNT(a[i]))
        {
            ViTri = i;
            break;
        }
    }
    return ViTri;
}

void InSoNguyenTo(int n, int a[])
{
    for(int i = 0; i<n;i++)
    {
        if(KTNT(a[i]) == 1){std::cout << a[i] << " ";}
    }
}



int main()
{
    int n =0, a[100] = {0};
    std::cout << "nhap do dai mang: " << std::endl;
    std::cin>>n;
    NhapMang(a,n);
    
    std::cout << "mang vua nhap la: " << std::endl;
    xuatmang(n,a);
    std::cout << std::endl;
    std::cout << "cac so nguyen to la: "  << std::endl;
    InSoNguyenTo(n,a);
    std::cout << "tong cac so chinh phuong la: " << TongSoChinhPhuong(n,a) << std::endl;
    std::cout << "So so hoan hao la: " << DemSoHoanHao(n,a);
    std::cout << "vi tri dau tien tim thay so nguyen to: " << TimSoNGuyenTo(n,a) << std::endl;
    return 0;
    
}