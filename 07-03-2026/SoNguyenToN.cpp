#include <bits/stdc++.h>
int KTNT(int n)
{
    if (n < 2) return 0; 
    int dem = 0;
    for(int i = 1; i <= n; i++) 
    {
        if(n % i == 0)
        {
            dem++;
        }
    }
    
    if (dem == 2) return 1; 
    else return 0;
}
int main()
{
    int n;
    std::cout << "nhap n"; std::cin >> n;
    for(int i = 2; i<=n; i++)
    {
        if(KTNT(i) == 1) std::cout << i << "";
    }
    return 0;
}