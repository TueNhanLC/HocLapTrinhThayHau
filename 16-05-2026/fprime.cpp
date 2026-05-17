#include <iostream>
#include <cmath>

// Tận dụng hàm kiểm tra số nguyên tố tối ưu của bạn
int KTNT(long long n) {
    if (n < 2) return 0; 
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    freopen("INPUT.INP", "r", stdin);
    freopen("OUTPUT.OUT", "w", stdout);

    long long P;
    if (!(std::cin >> P)) return 0;

    long long f1 = 1;
    long long f2 = 1;
    long long dem = 0;

   
    while (true) {
        long long f3 = f1 + f2;
        if (f3 > P) break;      

        if (KTNT(f3)) {
            dem++; 
        }


        f1 = f2;
        f2 = f3;
    }

    std::cout << dem << std::endl;

    return 0;
}
