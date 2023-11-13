#ifndef MAGE_H
#define MAGE_H
#include <string>
#include "Character.hpp"
using std::string;

class Mage: public Character
{
private:
    int manaBar;

public:
    Mage(const string& name);
    ~Mage();
};



#endif