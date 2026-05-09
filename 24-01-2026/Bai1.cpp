#include <iostream>

int main()
{
    int A = 0;
    std::cout << "A = "; std::cin >> A;
    for(int i = 0; i < A; i++)
    {
        for(int j = 0; j < A; j++)
        {
            for(int k = 0; k < A; k++)
            {
                if(i*1000 + j*1000 + k*1000 == A)
                {
                    std::cout << i << j << k << std::endl;
                }
            }
        }
    }
    return 0;
}