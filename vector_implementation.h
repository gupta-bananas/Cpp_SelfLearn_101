//
// Created by Abhinav Gupta on 1/4/26.
//

#include <iostream>

#ifndef CPP_SELFLEARN_101_VECTOR_IMPLEMENTATION_H
#define CPP_SELFLEARN_101_VECTOR_IMPLEMENTATION_H

template<typename T>
class vector_implementation {
public:
    Vector(){
        ReAlloc(2);
    }

    void push_back(const T& value);
    void pop_back();
    T& operator[](size_t index);
    const T& operator[](size_t index) const;

private:
    T* m_data = 0;
    size_t m_size = 0;
    size_t m_capacity = 0;
    void ReAlloc(size_t newCapacity) {
        // 1. allocate a new block of memory
        // 2. copy/move old element into a new block
        // 3. delete

        T* newBlock = new T[newCapacity];
        for (size_t i{0}; i< m_size; i++) {
            newBlock[i] = m_data[i];
        }

        delete[] m_data;
        m_data = newBlock;
        m_capacity = newCapacity;

    }
};

#endif //CPP_SELFLEARN_101_VECTOR_IMPLEMENTATION_H