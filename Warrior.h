#pragma once

#include "Character.h"

class Warrior : public Character {
private:
  bool isShielding;
  bool isRoaring;

public:
  Warrior(string name, int health, int attackPower, int defense);
  void useShield(); // Gives a defense buff
  void setIsShielding(bool val);
  bool getIsShielding() const { return isShielding; };
  void setIsRoaring(bool val);
  bool getIsRoaring() const { return isRoaring; }

  void attack(Character &target) override;
  void useRoar(); // Gives an attackPower buff
};
