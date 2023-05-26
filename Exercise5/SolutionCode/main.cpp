#include <iostream>
#include <cmath>
//functions are built by the <return_type> name_of_the_function (*input_parameters*)
double calcSum(double k) //function declaration
{
    // std::pow(x,y) calculates the y power of x, i.e. x^k
    // Note that x^k in c++ has a different meaning and will not give you the power
    // In fact it performs the bitwise xor operation but you don't have to worry about it
    double summand = 4 * std::pow(-1, k) / (2 * k + 1);

    return summand;
}

int main()
{
    unsigned n = 0;
    double sum = 0.0; //value where the terms are added back to

    std::cout << "I will calculate Pi for you! Enter a number to specify the precision\n";
    std::cin >> n;

    // iterate from 0 <= i < n and sum the term to the global sum
    for(int i = 0; i < n; ++i)
    {
        sum += calcSum(i);
    }

    //std::abs(x) calculates the absolute value of x
    std::cout << "Our sum method determined pi to be around " << sum << 
        " the error from real pi is " << std::abs(sum - M_PI) << " \n";

    return 0;
}