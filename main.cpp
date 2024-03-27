#include <stdio.h>
#include <iostream>

int main()
{
    int edad;
    std::cout<<"agregar edad";
    std::cin >> edad;
    
    if (edad >=17) {
        std::cout << "eres mayor de edad." << std::endl;
    } else{
        std::cout << "eres menor de edad." << std::endl;
    }
    return 0;
}
