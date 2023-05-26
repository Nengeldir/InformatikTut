#include <iostream>

int main()
{
    double input;

    std::cout << "I will tell, whether a number is positive, zero, or negative\n";
    std::cout << "Enter a number (not necessarily integer)\n";

    while(true)
    {
        std::cin >> input;
        if(input > 0)
        {
            std::cout << "Number is positive\n";
        }
        else if(input == 0)
        {
            std::cout << "Number is zero\n";
        }
        else if(input < 0)
        {
            std::cout << "Number is negative\n";
        }
        else
        {
            break;
        }
    }
    
}