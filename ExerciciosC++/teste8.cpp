#include <iostream>

int main(void){

    std::string str;

    std::cout << "Qual é a sua string? ";
    std::getline(std::cin,str);
    std::cin.ignore(32767,'\n');

    std::cout << "Sua string é: " << str << std::endl;

    return 0;
}
