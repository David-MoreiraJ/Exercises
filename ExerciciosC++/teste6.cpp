#include <iostream>

int main(void){

    double zero = 0.0;
    double V1 = 5.0 / zero; //infinito positivo
    std::cout << "V1: " << V1 << std::endl;

    double V2 = -5.0 / zero; // infinito negativo
    std::cout << "V2: " << V2 << std::endl;

    double V3 = sqrt(-1); // Não é um número
    std::cout << "V3 " << V3 << std::endl;

    std::cout << isinf(zero) << std::endl; // 0
    std::cout << isinf(V2) << std::endl; // 1
    std::cout << isnan(V3) << std::endl;

    return 0;
}
