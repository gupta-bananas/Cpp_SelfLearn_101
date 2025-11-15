#include <iostream>
int main (){

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    name.length(); // returns length
    name.empty(); // return boolean
    name.append("@gmail.com"); // adds this value to the end.


}