#include <iostream>
#include <vector>

void* operator new(size_t size){
    return malloc(size);
}

struct Data {
    int Value = 0;

    explicit Data(int value) : Value(value){

    }
};

static void printVector(const std::vector<Data>& vec) {
    std::cout<< "Size: " << vec.size() << std::endl;
    for (Data i : vec){
        std::cout << i.Value <<" ";
    }
}

int main() {
    std::vector<Data> apple; apple.reserve(5);
    for (int i=0; i<5; i++) {
        apple.emplace_back(i);
    }

    printVector(apple);

}
