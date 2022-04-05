#include <iostream>

int main(void){

    std::string str1;
    std::string str2;

    std::cout << "Digite a String 1 e String 2" << std::endl;
    std::getline(std::cin,str1);
    std::getline(std::cin,str2);

    if(str1 == str2){
        std::cout << "Suas strings são iguais" << std::endl;
    }
    else{
        std::cout <<"Suas strings são diferentes" << std::endl;
        if(str1 > str2){
            std::cout << "A primeira string é maior que a segunda!" << std::endl;
        }
        else{
            std::cout << "A segunda string é maior que a primeira!" << std::endl;
        }
    }

    return 0;
}
