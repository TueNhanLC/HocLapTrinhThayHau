#include <bits/stdc++.h>

int KTNT(int n)
{
    int s = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0) s = s + i;
    }
    
    if(s == n + 1) return 1;
    else return 0;
}

int main()
{
    int n;
    std::cout << "nhap n = "; std::cin >> n;
    int dem = 0;
    int i = 2;
    while (dem < n)
    {
        if(KTNT(i) == 1) 
        {
            dem++;
            std::cout << i << " ";
        }
        i++;
    }
    return 0;
}
