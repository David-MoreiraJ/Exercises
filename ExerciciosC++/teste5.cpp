#include <iostream>

int main(void){
    double x;
    std::cout << "Digite um valor no formato double: ";
    std::cin >> x;
    if(std::cin.fail()){ // Erro na extração?
        std::cout << "Valor inválido!" << std::endl;
        // Limpa o estado de erro do buffer
        std::cin.clear();
        // Descarta o restante do buffer
        std::cin.ignore(32767,'\n');
    }
    else{
        std::cout << "Valor digitado: " << x;
    }

    return 0;
}
