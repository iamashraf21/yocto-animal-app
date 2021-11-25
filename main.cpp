#include <iostream>
#include <string>
using namespace std;

#include "animal.h"
#include "dog.hpp"

int main()
{
    Dog d1("German Shepherd", 4);
    cout<<d1.getDogName()<<endl;
    cout<<d1.getDogAge()<<endl;

    return 0;
}
