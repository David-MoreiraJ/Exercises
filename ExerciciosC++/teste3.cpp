#include<iostream>

int main(void){

    float y = 5.17;

    // Exibe y
    std::cout << y << std::endl;

    // Exibe y com largura 10
    std::cout.width(10);
    std::cout << y << std::endl;

    // Exibe y com largura 10, completando com x
    std::cout.width(10);
    std::cout.fill('x');
    std::cout << y << std::endl;

    //Exibe y com precisão 15
    std::cout.precision(15);
    std::cout << y << std::endl;

    return 0;
}
