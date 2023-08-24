#include "Archer.h"
#include "Character.h"

Archer::Archer(string name, int health, int attackPower, int defense)
    : Character(name, health, attackPower, defense) {
  isAiming = false;
}

void Archer::useAim() {
  if (this->isAlive() && !isAiming) {
    this->setAttackPower(this->getAttackPower() + 20);
  }
}

void Archer::attack(Character &target) {
  Character::attack(target);

  if (isAiming) {
    this->setIsAiming(
        false); // Aim only remains active until an attack has been made.
  }
}
