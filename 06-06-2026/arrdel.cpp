#include <iostream>
#include <cstdio>

int main()
{
    freopen("arrdel.inp", "r",stdin);
    freopen("arrdel.out" ,"w",stdout);
    int n = 0;
    std::cin >> n;
    int X[n];
    for(int i = 0; i<n; i++) 
    {
        std::cin >> X[i];
    }
    for(int i = 0; i<n; i++)
    {
        if (X[i] == X[i + 1])
        {
            X[i] = 0;
        }

    }
    for(int i = 0; i<n; i++)
    {
        if (X[i] != 0)
        {
            std::cout << X[i] <<" " << std::flush; 
        }
    }
    
    return 0;
}