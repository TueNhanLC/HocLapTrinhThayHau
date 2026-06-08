#include <iostream>
#include <cstdio>

int main()
{
    freopen("psecond.inp", "r",stdin);
    freopen("psecond.out" ,"w",stdout);
    int n = 0, low2 = 0;
    std::cin >> n;
    int x[n];
    for(int i = 0; i<n; i++)
    {
        std::cin >> x[i];
    }
    low2 = x[0]; 
    for(int j = 1; j<n; j++)
    {
        if(x[j] < low2)
        {
            low2 = x[j]; 
        }
    }
    for(int w = 0; w<n; w++)
    {
        if (x[w] == low2)
        {
            std::cout << w + 1 << std::endl;

        }
    }

}