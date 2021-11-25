#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
using namespace std;

#include "animal.h"

class Dog:Animal
{
    private:
        string name;
        int age;
        
    public:
        Dog(const string& = "NULL", const int& = 1);
        string getDogName();
        int getDogAge();
};

#endif // DOG_HPP
