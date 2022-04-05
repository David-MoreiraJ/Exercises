#include <iostream>

int main (void){

    int V[5] = {10, 20, 30, 40, 50};

    for(int x: V){
        std::cout << x << "\n";
    }

    return 0;
}
