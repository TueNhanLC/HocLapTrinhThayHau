#include <iostream>

int main()
{
    int tong = 100, so_cho = 0, so_ga = 0;
    for(int so_cho = 0; so_cho < 36;so_cho++)
    {
        for (int so_ga = 0; so_ga < 36; so_ga++)
        {
            if (so_cho + so_ga == 36 and (so_ga * 2 + so_cho * 4) == 100)
            {
                std::cout << "so ga = " << so_ga << std::endl;
                std::cout << "so cho = " << so_cho << std::endl;
            }
        }
    }
    return 0;
}