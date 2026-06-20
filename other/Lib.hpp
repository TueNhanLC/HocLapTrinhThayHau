#include <math.h>
#include <vector>
#include <algorithm>

std::vector<int> findDivisors(int n) {
    std::vector<int> divisors;
    
    // Trường hợp n <= 0 (bạn có thể điều chỉnh tùy theo yêu cầu đề bài)
    if (n <= 0) return divisors;

    // Duyệt từ 1 đến căn bậc hai của n
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i); // i là ước số thứ nhất
            
            // Nếu ước số còn lại (n / i) khác i thì mới thêm vào để tránh trùng lặp
            if (i * i != n) {
                divisors.push_back(n / i);
            }
        }
    }

    // Sắp xếp lại các ước theo thứ tự tăng dần
    std::sort(divisors.begin(), divisors.end());

    return divisors;
}



std::vector<int> tachChuSo(long long n) {
    std::vector<int> danhSachChuSo;

    // Trường hợp đặc biệt nếu N bằng 0
    if (n == 0) {
        danhSachChuSo.push_back(0);
        return danhSachChuSo;
    }

    // Vòng lặp tách từng chữ số
    while (n > 0) {
        int chuSo = n % 10;          // Lấy chữ số hàng đơn vị
        danhSachChuSo.push_back(chuSo); // Thêm vào danh sách
        n /= 10;                     // Cắt bỏ chữ số vừa lấy
    }

    // Đảo ngược danh sách để các chữ số theo đúng thứ tự từ trái sang phải
    std::reverse(danhSachChuSo.begin(), danhSachChuSo.end());

    return danhSachChuSo;
}
// phan tich 1 so ra thua so nguyen to
std::vector<int> primeFactorize(int n) {
    std::vector<int> factors;
    
    // Trường hợp số nhỏ hơn hoặc bằng 1 (không có thừa số nguyên tố)
    if (n <= 1) return factors;

    // 1. Tách riêng toàn bộ thừa số 2 để sau đó chỉ cần duyệt qua các số lẻ
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }

    // 2. Duyệt qua các số lẻ từ 3 đến căn bậc hai của n
    // Điều kiện i * i <= n tương đương với i <= sqrt(n) nhưng chạy nhanh hơn
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i; // Giảm n đi i lần
        }
    }

    // 3. Nếu sau các bước trên mà n vẫn lớn hơn 1, thì bản thân n còn lại là một số nguyên tố
    if (n > 1) {
        factors.push_back(n);
    }

    return factors;
}

bool SoNguyenTo(int n)
{
    if (n < 2) return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int KiemTraChanLe(int a) {
    return (a % 2 == 0) ? 1 : 0;
}

int UCLN(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}


int BCNN(int a, int b)
{
    return a*b/UCLN(a, b);
}

bool KTNT(int n)
{
    if (n < 2) return 0; 
    
    // Chỉ chạy đến căn bậc hai của n
    for(int i = 2; i * i <= n; i++) 
    {
        if(n % i == 0)
        {
            return false; // Thấy chia hết là dừng luôn, trả về 0
        }
    }
    
    return true; // Không chia hết cho số nào thì là số nguyên tố
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

bool KiemTraChinhPhuong(int n)
{
    if (n < 0) return false; // Số âm không phải số chính phương
    int a = sqrt(n);
    return (a * a == n);     // SỬA Ở ĐÂY: kiểm tra bình phương
}


