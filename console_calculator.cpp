#include <iostream>

int main(){
    std::cout << "What do you want to do? \npress 1:add\n2:substract\n3:multiply\n4:divide\n";
    char action; 
    std::cin >> action;
    int a;
    int b;
    std::cin >> a;
    std::cin >> b;

    if(action == '1') std::cout <<"sum: " << a+b;
    if(action == '2') std::cout <<"subtracted num: " << a-b; 
    if(action == '3') std::cout <<"multiplied num: " << a*b;
    if(action == '4') std::cout <<"dividen num: " << a/b;

    return 0;
}