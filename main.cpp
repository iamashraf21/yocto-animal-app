#include <iostream>
#include <string>
using namespace std;

#include "animal.h"

int main()
{
    Animal a1("Monkey");
    cout<<a1.getSpecies()<<endl;

    return 0;
}
