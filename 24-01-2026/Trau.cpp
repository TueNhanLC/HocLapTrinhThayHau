#include <iostream>

int main()
{
    int td = 0, tn = 0,tg = 0;
    for (int td = 0; td <100; td++)
    {
        for(int tn = 0; tn < 100; tn++)
        {
            for(int tg = 0; tg < 100; tg++)
            {
                if ((td + tn + tg == 100) and (td * 5 + tn * 3 + (float)tg / 3 == 100))
                {
                    std::cout << "tg = " << tg << std::endl;
                    std::cout << "tn = " << tn << std::endl;
                    std::cout << "td = " << td << std::endl;
                }
            }
        }
    }
    return 0;
}