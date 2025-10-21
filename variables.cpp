//
// Created by Abhinav Gupta on 10/21/25.
//
#include <iostream>

int main() {
    int a; //Can only store till 31 becuz 1 bit is for negetive.
    a=101;
    // unsigned number = number that does not have negetive sign. Have ALL 32 bits.
    unsigned int b  = 90;

    // PRIMITIVE DATA TYPES
    // We cannot access bits but we can bytes.
    // bool = 1 byte    0 = False;  N>0 = True
    // char  = 1 byte
    // short = 2 bytes
    // int = 4 bytes
    // long = 4 bytes
    // float = 4 bytes
    // double = 8 bytes
    // long long = 8 bytes;
    // can add unsigned to any of these
    // size is alo depended on compiler
    // 'sizeof(datatype)' ----> check size depended on compiler




    char ch1 = 'A'; // Output is A
    char ch2 = 65; // Output is A


    std::cout << ch2 << std::endl;
    std::cout << "Testing Variables" << std::endl;
}