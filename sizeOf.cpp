#include <iostream>

double total(double list[]);

int main(){
    double prices[] = {1.2, 5.4, 6.7};
    std::cout << total(prices);
}

double total(double list[]){
    double sum;
    for(int i=0;i <sizeof(list); i++){
        sum+=list[i];
    }
    return sum;
}