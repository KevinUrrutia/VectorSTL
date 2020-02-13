#include "intVector.h"

#include <iostream> 
#include <cstdlib>
#include <stdexcept>

using namespace std;

IntVector::IntVector() {
    this->sz = 0;
    this->cap = 0;
    data = nullptr;
}


IntVector::IntVector(unsigned size, int value) {
    this->sz = size;
    this->cap = size;
    data = new int[size];
    for (unsigned int i = 0; i < size; ++i) {
        data[i] = value;
    } 
}

IntVector::~IntVector() {
    delete[] data;
}

unsigned IntVector::size() const {
    return sz;
}

unsigned IntVector::capacity() const {
    return cap;
}

bool IntVector::empty() const {
    if (sz != 0) {
        return false;
    }
    else {
        return true;
    }
}

const int& IntVector::at(unsigned index) const  {
    if (index >= sz) {
        throw out_of_range("IntVector::at_range_check");
        exit (1);
    }
    else {
        return data[index];
    }
}

const int& IntVector::front() const {
    return data[0];
}

const int& IntVector::back() const {
    return data[sz - 1];
}

void IntVector::insert(unsigned index, int value) {
    if (index > sz) {
        throw out_of_range("IntVector::insert_range_check");
        exit(1);
    }
    
 
    if (sz == cap) {
        expand();
    }
    
    ++sz;
    
    for (unsigned int i = index; i < sz - 1; ++i) {
        data[i + 1] = data[i];
    }
    data[index] = value;
}

void IntVector::erase(unsigned index) {
    if (index >= sz) {
        throw out_of_range("IntVector::erase_range_check");
        exit(1);
    }
    
    for (unsigned int i = index; i  < sz - 1; ++i) {
        swap(data[i], data[i + 1]);
    }
    sz--;
}

void IntVector::expand() {
    int *temp = data;
    if (cap == 0) {
        cap = 1;
        data = new int[cap];
    }
    else {
        cap *= 2;
        data = new int[cap];
        for (unsigned int i = 0; i < sz; ++i) {
            data[i] = temp[i];
        }
    }
    
    delete[] temp;
}

void IntVector::expand(unsigned amount) {
    int *temp = new int[cap + amount]; 
    
    for (unsigned int i = 0; i < cap; ++i) {
        temp[i] = data[i]; 
    }
    
    delete[] data;
    
    data = temp;
    
    cap += amount;
}

int& IntVector::front() {
    return data[0];
}

int& IntVector::back() {
    return data[sz - 1];
}

void IntVector::assign(unsigned n, int value) {
    if (n > (cap * 2)) {
        expand(n - cap);
        }
    else if (n > cap && n <= (cap * 2)) {
        expand();
    }
    
    sz = n;
    for (unsigned int i = 0; i < sz; ++i) {
        data[i] = value;
    }
}


void IntVector::push_back(int value) {
    if(sz >= cap) {
       expand(); 
    }
    ++sz;
    data[sz - 1] = value;
}

void IntVector::pop_back() {
    sz--;
}

void IntVector::clear() {
    sz = 0;
}

void IntVector::resize(unsigned size, int value) {
    if (size <= sz) {
        sz = size;
        return;
    }
    else if (size > sz) {
        if (size > (cap * 2)) {
            expand(size - cap);
        }
        else if (size > cap && size <= (cap * 2)) {
            expand();
        }
    }
    
    for (unsigned int i = sz; i < size; ++i) {
        data[i] = value;
    }
    sz = size;
}

void IntVector::reserve(unsigned n) {
    if (n > cap) {
       cap = n;
    }
}

int& IntVector::at(unsigned index) {
     if (index >= sz) {
        throw out_of_range("IntVector::at_range_check");
        exit (1);
    }
    else {
        return data[index];
    }
}
