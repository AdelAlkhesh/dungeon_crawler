#pragma once

#include <string>

using std::string;

class Character {
private:
  string name;
  int health;
  int attackPower;
  int defense;

public:
  Character(string name, int health, int attackPower, int defense);

  void attack(Character &target);

  void receiveDamage(int damage);

  bool isAlive() { return health > 0; }

  string getName() { return name; }
  int getHeath() { return health; }
  int getAttackPower() { return attackPower; }
  int getDefense() { return defense; }
  void setHealth(int newHealth);
};
