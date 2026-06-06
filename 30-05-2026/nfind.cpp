#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

int main() 
{
    freopen("input.inp", "r", stdin);
    freopen("output.out", "w", stdout);

    long long m;
    if (!(std::cin >> m)) return 0;

    if (m == 1) {
        std::cout << 1 << std::endl;
        return 0;
    }

    std::vector<int> ketQua;

    for (int i = 9; i >= 2; --i) {
        while (m % i == 0) {
            ketQua.push_back(i); 
            m /= i;             
        }
    }

    if (m > 1) {
        std::cout << -1 << std::endl;
    } 
    else {
        // Vì ta tìm từ 9 về 2 nên các chữ số đang bị ngược (ví dụ tìm được 5 trước rồi đến 2)
        // Cần sắp xếp tăng dần để tạo ra số K nhỏ nhất (ví dụ: 25 thay vì 52)
        std::sort(ketQua.begin(), ketQua.end());
        
        // In ra kết quả liền nhau
        for (int x : ketQua) {
            std::cout << x;
        }
        std::cout << std::endl;
    }

    return 0;
}