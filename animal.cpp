#include "animal.h"  

Animal::Animal(const string& name)
{
    species = name;
}

string Animal::getSpecies()
{
    return species;
}
