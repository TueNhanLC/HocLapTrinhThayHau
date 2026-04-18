#include <iostream>
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
    std::cout << "cac snt co 5 chu so la ";
    for(int i = 10000; i<=99999;i++)
    {
        if(KTNT(i) == 1){std::cout << i << " ";}
    }
    return 0;
}