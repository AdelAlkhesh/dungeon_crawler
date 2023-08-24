#include "Character.h"
#include <iostream>
#include <stdexcept>
#include <string>

using std::string;

Character::Character(string name, int health, int attackPower, int defense)
    : name(name), health(health), attackPower(attackPower), defense(defense) {}

void Character::setHealth(int newHealth) {
  if (newHealth >= 0) {
    health = newHealth;
  }
}

void Character::setDefense(int newDefense) {
  if (newDefense >= 0) {
    defense = newDefense;
  }
}

void Character::setAttackPower(int newAttackPower) {
  if (newAttackPower >= 0) {
    attackPower = newAttackPower;
  }
}

void Character::attack(Character &target) {
  if (target.isAlive() && this->isAlive()) {
    try {
      target.receiveDamage(attackPower);
    } catch (const std::invalid_argument &e) {
      std::cerr << "Caught exception: " << e.what() << std::endl;
    }
  }
}

void Character::receiveDamage(int damage) {
  if (damage < 0) {
    throw std::invalid_argument("damage argument only accepts positive values");
  }
  int damageRecieved = (damage - defense) < 0 ? 0 : (damage - defense);
  if (health - damageRecieved <= 0) {
    this->setHealth(0);
  } else {

    this->setHealth(health - damageRecieved);
  }
}
