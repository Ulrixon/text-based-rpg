#ifndef GOBLIN_HPP
#define GOBLIN_HPP

#include "Enemy.hpp"
#include "../Characters/Character.hpp"

class Goblin : public Enemy {        
    public:
        Goblin(string,int);
        void lifeSwipe(Character *);
        virtual int selectSkill();
        virtual void useSkillOn(int, Character *);
};

#endif /* GOBLIN_HPP */