#include <iostream>

int main()
{
    /*initializes a variable called i that is integer,
    checks wheter the condition is satisfied, i.e. i < 5
    at the end increases i and checks if condition is still satisfied*/
    for(int i = 0; i < 5; ++i) //iterates over 0, 1, 2, 3, 4
    {
        std::cout << "i = " << i << "\n"; 
    }

    int i = 0;

    //does something while condition is satisfied, it is checked at the beginning
    //and in the end

    while(i < 5)
    {
        std::cout << "i = " << i << "\n";
        ++i;
    }

    i = 0;

    //starts with execution and only checks the condition afterwards
    do
    {
        std::cout << "i = " << i << "\n";
        ++i;
    }while(i < 5);

    // all of these loops are equivalent! Note this can always be done, but 
    // sometimes it's more involved than in this example
    return 0;
}