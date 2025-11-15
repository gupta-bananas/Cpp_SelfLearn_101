#include <iostream>

int main(){
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() %100) +1;
    std::cout << num;

}