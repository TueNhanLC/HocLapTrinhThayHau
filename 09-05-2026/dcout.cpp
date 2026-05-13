#include <iostream>
#include <cstdio>


long long solve(int n) {
    long long count = 0;
    for (int i = 1; i <= n; i *= 10) {
        count += (n - i + 1);
    }
    return count;
}


int main() 
{
    freopen("INPUT.INP", "r", stdin);
    freopen("OUTPUT.OUT", "w", stdout);

    
    int n = 0;
    std::cin >> n;
    if(n>1000000){return 0;}
    long long res = solve(n);
    
    std::cout << res << std::endl;
    return 0;
}
