//
// Created by Abhinav Gupta on 10/21/25.
//

#include <iostream>

// void = returns nothing

void print() {
    int a = 10;
    std::cout << a << std::endl;

}

int multiply(int a, int b) {
    return a * b;
}


int main() {
    print();
    std::cout << multiply(5,3) << std::endl;
}