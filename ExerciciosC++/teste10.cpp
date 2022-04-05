#include <iostream>

int main(void){

    std::string str1;
    std::string str2 = "Olá mundo!";

    str1.assign(str2);

    str1 = str2;

    std::cout << str1 << str2 << std::endl;

    return 0;
}
