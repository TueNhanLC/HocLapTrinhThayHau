#include <iostream>
#include <cstdio>

int main()
{
    freopen("pmin.inp", "r",stdin);
    freopen("pmin.out" ,"w",stdout);
    int n = 0, low = 0;
    std::cin >> n;
    int x[n];
    for(int i = 0; i<n; i++)
    {
        std::cin >> x[i];
        
    }
    low = x[0];
    for(int j = 0; j<n; j++)
    {
        if (x[j] < low)
        {
            low = x[j];
        }
    }
    for(int w = 0; w<n; w++)
    {
        if (x[w] == low)
        {
            std::cout << w + 1 <<  " " <<std::flush;
        }
    }
   return 0;

}         