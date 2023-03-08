#include <iostream>

int main()
{
    int promenna{5};
    std::cout << " Hello world \n";
    std::cout << " Hello world 2\n";
    std::cout << " Hello world 4\n";
    std::cout << " promenna = " << promenna << " \n";
    std::cout << " adresa promenne = " << &promenna << " \n";
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << "cyklus : " << i << "/n";
    }
    
    return 0;
}