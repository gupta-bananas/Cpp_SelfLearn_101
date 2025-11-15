#include <iostream>

int main(){
    std::string cars[] = {"Corvette", "Lambo", "BMW", "Camry"};
    cars[3] = "Mercedes";

    int age[3];
    double d[100];


    for(int i = 0; i<sizeof(age); i++){
        std::cout << age[i] << " ";
    }
    return 0;
}