#include <iostream>

void happyBday(std::string str);
double cube (double l);

int main(){
    happyBday("Gupta");
    std::cout << cube(4);
}

void happyBday(std::string str){
    std::cout << "Happy birthday to " << str<< "\n";
    

}

double cube(double l){
    return l*l*l;
}