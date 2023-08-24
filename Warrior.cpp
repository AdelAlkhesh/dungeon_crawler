#include "Warrior.h"
#include "Character.h"

Warrior::Warrior(string name, int health, int attackPower, int defense)
    : Character(name, health, attackPower, defense) {
  isShielding = false;
  isRoaring = false;
}

void Warrior::setIsRoaring(bool val) { isRoaring = val; }
void Warrior::setIsShielding(bool val) { isShielding = val; }

void Warrior::useShield() {
  if (this->isAlive() && !isShielding) {
    this->setDefense(this->getDefense() + 10);
    this->setIsShielding(true);
  }
}

void Warrior::useRoar() {
  if (this->isAlive() && !isRoaring) {
    this->setAttackPower(this->getAttackPower() + 10);
    this->setIsRoaring(true);
  }
}

void Warrior::attack(Character &target) {
  this->setIsShielding(false); // Cannot shield while attacking
  Character::attack(target);
  if (isRoaring) {
    this->setIsRoaring(
        false); // Roar only remains active until an attack has been made.
  }
}
