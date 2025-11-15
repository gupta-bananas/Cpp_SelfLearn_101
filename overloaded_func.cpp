#include<iostream>

void bakePizza();
void bakePizza(std::string top1);
void bakePizza(std::string top1, std::string top2);

int main(){

    bakePizza("cheese", "bell peppersß");

    return 0;
}

void bakePizza(){
    std::cout << "Here is you plain pizza";
}

void bakePizza(std::string top1){
    std::cout << "Here is your pizza with " << top1;
}

void bakePizza(std::string top1, std::string top2){
    std::cout << "Here is your pizza with " << top1 << " and " << top2;
}