#include <iostream>

int main()
{
    std::string name;
    int age;
    double number1, number2;
    double answer;
    std::cout << "Hello, I am your Computer, what's your name?\n";
    std::cin >> name;
    std::cout << "Hello " << name << ", how old are you?\n";
    std::cin >> age;
    std::cout << "Oh that's nice, I find " << age << " very young!\n";
    std::cout << "I can be also your calculator!\n";
    std::cout << "Give me two (also rational numbers) to multiply\n";
    std::cout << "Enter first number and second number\n";
    std::cin >> number1 >> number2;
    answer = number1 * number2;
    std::cout << number1 << " * " << number2 << " = " << answer;
    //std::cout << number1 << " * " << number2 << number1 * number2;
    std::cout << "goodbye!!!";

    return 0;
}