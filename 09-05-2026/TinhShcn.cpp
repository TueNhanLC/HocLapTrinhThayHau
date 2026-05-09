#include <iostream>
#include <cstdio>

int main()
{
    int a = 0, b = 0, c = 0;
    freopen("INPUT.INP", "r", stdin );
    freopen("OUTPUT.OUT", "w", stdout);
    std::cin >> a >> b;
    c = a * b;
    std::cout << c <<std::endl;

    return 0;
}