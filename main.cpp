#include "intVector.h"

#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    
    cout << "Testing defualt constructor-- " << endl;
    IntVector vector1; 
    cout << "Defualt vector 1 size: " << vector1.size() << endl;
     cout << "Defualt vector 1 capacity: " << vector1.capacity() << endl;
     cout << "Vector 1 Empty?: ";
     if (!vector1.empty()) {
         cout << "false" << endl;
    }
    else {
        cout << "true" << endl;
    }
    cout << endl;
    
     cout << "Testing constructor with given size and 0 as value-- " << endl;
    IntVector vector2(10, 9);
     cout << "Vector 2 Size: " << vector2.size() << endl;
     cout << "Vector 2 Capacity: " << vector2.capacity() << endl;
     cout << "Vector 2 Empty?: ";
     if (!vector2.empty()) {
         cout << "false" << endl;
     }
     else {
         cout << "true" << endl;
     }
     cout << endl;
    
     cout << "Testing in range at function-- " << endl;
     cout << "Vector 1 test: ";
     for (unsigned int i = 0; i < vector1.size(); ++i)
     {
         cout << vector1.at(i) << " ";
     }    
     cout << endl;
     cout << "Vector 2 test: ";
     for (unsigned int i = 0; i < vector2.size(); ++i) {
         cout << vector2.at(i) << " ";
     }
     cout << endl << endl;
    
     //cout << "Testing out of range at function-- " << endl;
     //cout << "Vector 2 test at index 10: ";
     //cout << vector2.at(10);
     //cout << endl << endl;
    
     cout << "Testing .front function-- " << endl;
     cout << "vector2.front(): " << vector2.front();
     cout << endl << endl;
    
     cout << "Testing .back function-- " << endl;
     cout << "vector2.back(): " << vector2.back();
     cout << endl << endl;
    
    cout << "Testing .insert function-- " << endl;
    cout << "vector2.insert(0,1): ";
    vector2.insert(5, 1); 
    for (unsigned int i = 0; i < vector2.size(); ++i) {
        cout << vector2.at(i) << " ";
    }
    
    cout << "size: " << vector2.size() << "   cap: " << vector2.capacity() << endl;
    cout << endl << endl;
    
     cout << "Testing .erase function-- " << endl;
     cout << "vector2.erase(5): ";
     vector2.erase(5); 
     for (unsigned int i = 0; i < vector2.size(); ++ i) {
         cout << vector2.at(i) << " ";
     }
     cout << endl << endl;
    
     cout << "Testing .assign function-- " << endl;
     cout << "vector2.assign(5,2): ";
     vector2.assign(5, 2);
     for (unsigned int i = 0; i < vector2.size(); ++i) {
         cout << vector2.at(i) << " ";
     }
     cout << endl << endl;
    
     cout << "Testing .push_back function-- " << endl;
     cout << "vector2.push_back(10): ";
     vector2.push_back(10);
     for (unsigned int i = 0; i < vector2.size(); ++i) {
         cout << vector2.at(i) << " "; 
     }
     cout << endl << endl;
    
     cout << "Testing .pop_back function-- " << endl;
     cout << "vector2.pop_back(): ";
     vector2.pop_back();
     for (unsigned int i = 0; i < vector2.size(); ++i) {
         cout << vector2.at(i) << " ";
     }
     cout << endl << endl;
    
     cout << "Testing .clear function-- " << endl;
     cout << "vector2.clear(): ";
     vector2.clear();
     for (unsigned int i = 0; i < vector2.size(); ++ i) {
         cout << vector2.at(i) << " ";
     }
     cout << endl << endl;
    
     cout << "Testing .resize function-- " << endl;
     cout << "vector2.resize(6): ";
     vector2.resize(6);
     for (unsigned int i = 0; i < vector2.size(); ++i) {
         cout << vector2.at(i) << " ";
     }
     cout << endl << endl;
    
     cout << "Testing .push_back function on empty vector-- " << endl;
     cout << "vector1.push_back(10): ";
     vector1.push_back(10);
     for (unsigned int i = 0; i < vector1.size(); ++i) {
         cout << vector1.at(i) << " ";
     } 
     cout << endl;
     cout << "vector1.size(): " << vector1.size() << endl << "vector1.cap(): "<< vector1.capacity();
     cout << endl << endl;
    
     cout <<"Testing .reserve function-- " << endl;
     cout << "vector2.reserve(11): ";
     vector2.reserve(11);
     cout << endl;
     cout << "vector2.capacity(): " << vector2.capacity();
     cout << endl << endl;
    
    return 0;
}
