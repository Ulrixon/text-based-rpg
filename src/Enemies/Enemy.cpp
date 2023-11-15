#include "../../lib/Enemies/Enemy.hpp"
#include <assert.h>

Enemy::Enemy(string name, int level){
    this->level=level;
    this->name=name;
    //Our name has to be a non-empty string.
    assert(name!="" && "Your name must not be empty!");
    //Our level can't be less than 0.
    assert(level>=0 && "Your level must not be less than 0!");
    //Setting default values.
    this->setHealth(0);
    this->setDefense(0);
    this->setAttack(0);
    this->setIncrmnts(0,0,0);
    this->setMovable(true);
}

void Enemy::getStatus(ostream &out){
    out << endl;
    out << name << "'s Status: " << endl;
    out << "--------------------------\n";
    out << "Level   = " << level << endl;
    out << "Health  = " << health << endl;
    out << "Defense = " << defense << endl;
    out << "Attack  = " << attack << endl;
    out << endl;
}

string Enemy::getName(){
    return name;
}

void Enemy::setAttack(int atk){
    this->attack=atk;
}

void Enemy::setDefense(int def){
    this->defense=def;
}

void Enemy::setHealth(int hp){
    this->health=hp;
}

void Enemy::setIncrmnts(int hpInc, int defInc, int atkInc){
    this->hpIncrmnt=hpInc;
    this->defIncrmnt=defInc;
    this->atkIncrmnt=atkInc;
}

int Enemy::getHealth(){
    return this->health;
}

int Enemy::getDefense(){
    return this->defense;
}

int Enemy::getAttack(){
    return this->attack;
}

void Enemy::setMovable(bool status){
    this->isMovable=status;
}

bool Enemy::checkMovable(){
    return this->isMovable;
}

void Enemy::takeDamage(int dmg){
    //Reduce our health by the specified damage.
    this->health -= dmg;
    cout<<this->getName()<<" took "<<dmg<<" damage."<<endl;
}

void Enemy::normalAttack(Character *c){
    //The character takes damage from the enemy.
    cout<<this->getName()<<" used a normal attack on "<<c->getName()<<"."<<endl;
    c->takeDamage(this->attack);
}
