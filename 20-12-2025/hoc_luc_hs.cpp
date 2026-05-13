#include <iostream>

int main()
{
    float diem_kiem_tra = 0; // diem bai kiem tra
    float diem_giua_ky = 0; // diem thi giua ky
    float diem_cuoi_ky = 0; // diem thi cuoi ky
    double diem_trung_binh = 0;
    std::cout << "nhap diem bai kiem tra: "; std::cin >> diem_kiem_tra;
    std::cout << "nhap diem giua ky: "; std::cin >> diem_giua_ky;
    std::cout << "nhap diem cuoi ky: "; std::cin >> diem_cuoi_ky;
    diem_trung_binh = (diem_cuoi_ky + diem_giua_ky + diem_kiem_tra) / 3;
    if (diem_trung_binh >= 9.0)
    {
        std::cout << "Xep loai A" << std::endl;
    }
    else if (diem_trung_binh >= 7.0 and diem_trung_binh < 9.0)
    {
        std::cout << "xep loai B" << std::endl; 
    }
    else if (diem_trung_binh >= 5.0 and diem_trung_binh < 7.0)
    {
        std::cout << "Xep loai C" << std::endl; 
    }
    else
    {
        std::cout << "Xep loai F" << std::endl;
    }
    return 0;
}