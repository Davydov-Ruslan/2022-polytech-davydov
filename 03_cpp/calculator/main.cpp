#include <iostream>

int main()
{
    float chislo_1, chislo_2, result, number;

    int m, n;

    char deistvie;

    while (1)
    {
        std::cout << "Enter first number:";
        std::cin >> chislo_1;

        std::cout << "Enter action:";
        std::cin >> deistvie;

        std::cout << "Enter second number:";
        std::cin >> chislo_2;

        if (deistvie == '+')
        {
            result = chislo_1 + chislo_2;
        }

        if (deistvie == '-')
        {
            result = chislo_1 - chislo_2;
        }

        if (deistvie == '*')
        {
            result = chislo_1 * chislo_2;
        }

        if (deistvie == '/')
        {
            result = chislo_1 / chislo_2;
        }

        if (deistvie == '^')
        {
            m = 1;

            for (n = 1; n <= chislo_2; n = n + 1)
            {
                m = m * chislo_1;
            }
            result = m;
        }

        std::cout << result << "\nif you want to continue, press 1, if you want to finish press 0:";

        std::cin >> number;

        if (number == 0)
        {
            break;
        }
        if (number == 1)
        {
            continue;
        }

    }

}