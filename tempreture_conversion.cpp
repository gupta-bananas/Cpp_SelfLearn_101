#include <iostream>

int main(){
    char unit;
    int op;
    std::cout << "Press 1 to convert from C to F \nPress 2 to convert from F to C\n";
    std::cin >> op;
    double temp;
    std::cout << "Enter the temp: ";
    std::cin >> temp;
    
    std::cout << "\nHere is the output: ";
    op==1 ? std::cout<< temp*((double)9/5)+32 : std::cout<<((double)5/9)*(temp-32);
    return 0;
}