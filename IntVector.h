#ifndef INTVECTOR_H
#define INTVECTOT_H

#include <stdexcept>

using namespace std;

class IntVector {
    private:
        //stores size of the intVector (num elements currently in use)
        unsigned sz;
        //stores the size of the array
        unsigned cap;
        //stores address of dynamically-allocated array of integers
        int *data;
    public:
        //default constructor
        IntVector();
    
        //Sets both the size and capacity of the IntVector to the value of the parameter passed in and dynamically allocates an array of that size as well. This function should initialize all elements of the array to the value of the 2nd parameter.
        IntVector(unsigned size, int value = 0);
        //The destructor is used to clean up (delete) any remaining dynamically-allocated memory. For this class, that will be the array pointed to by the int pointer called data.
        ~IntVector();
         //This function returns the current size (not the capacity) of the IntVector object, which is the values stored in the sz data field.
        unsigned size() const;
        //This function returns the current capacity (not the size) of the IntVector object, which is the value stored in the cap data field.
        unsigned capacity() const;
        //Returns whether the IntVector is empty (the sz field is 0).
        bool empty() const;
        //This function will return the value stored in the element at the passed in index position. Your function should throw an outofrange exception if an invalid index is passed in. An invalid index is an index greater than or equal to the size. 
        const int& at(unsigned index) const;
        //this function will return the value stored in the first element
        const int& front() const;
        //This function will return the value stored in the last element.
        const int& back() const;
        //This function inserts data at position index
        //Size will be increased by 1. However, If size will become larger than capacity, this function needs to first double the capacity.
        void insert(unsigned index, int value);
        //This function removes the value at position index and shifts all of the values at positions greater than index to the left by one (to the element right before its current position).
        //Size is decreased by 1. 
        void erase(unsigned index);
        //This function does exactly the same thing the accessor (const) version of front does
        int & front();
        //This function does exactly the same thing the accessor (const) version of back does
        int & back();
        //Assigns new content to the vector object, dropping all the elements contained in the vector before the call and replacing them by those specified by the parameters. The new value of size will be n and all values stored in the vector will have the value of the 2nd parameter.
        void assign(unsigned n, int value);
        //This function inserts a value at the back end of the array
        void push_back(int value);
        //This function just needs to decrease size by 1.
        void pop_back();
        //This function reduces the size of the vector to 0
        void clear();
        //This function resizes the vector to contain size elements.
        void resize(unsigned size, int value = 0);
        //This function requests that the capacity (the size of the dynamically allocated array) be set to n at minimum. This informs the vector of a planned increase in size.
        void reserve(unsigned n);
    
        int & at(unsigned index);
    
    private:
    //This function will double the capacity of the vector. This function should reallocate memory for the dynamically allocated array and update the value of capacity. Make sure your expand() function properly handles the case when capacity is 0 before calling expand(). This will be a special case within the expand() function
    void expand();
    //This function will expand the capacity of the vector by the amount passed in. This function should reallocate memory for the dynamically allocated array and update the value of capacity
    void expand(unsigned amount);
};

#endif
