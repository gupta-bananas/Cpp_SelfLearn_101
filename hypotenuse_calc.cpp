#include<iostream>

int main(){
    int sideA;
    int sideB;

    std::cout << "Enter side A and then side B: \n";

    std::cin >> sideA;
    std::cin >> sideB;

    std::cout << "Hypotenuse is EXACTLY "<< (double)sqrt(pow(sideA,2) + pow(sideB, 2)) << "\n";

    return 0;
}