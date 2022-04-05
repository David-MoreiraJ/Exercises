#include <iostream>

int main(void){

    std::string str1 = "Bom";
    std::string str2 = "Dia!";

    str1 += " ";
    str1.append(str2);
    str1.push_back('!');

    std::cout << str1 << std::endl;

    return 0;
}
