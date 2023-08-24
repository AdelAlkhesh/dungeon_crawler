#pragma once

#include "Character.h"

class Archer : public Character {
private:
  bool isAiming;

public:
  // Constructor
  Archer(string name, int health, int attackPower, int defense);

  // Getters/Setters
  void setIsAiming(bool val);
  bool getIsAiming() const { return isAiming; }

  // Methods
  void useAim();
  void attack(Character &target) override;
};
