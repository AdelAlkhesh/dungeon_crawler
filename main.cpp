#include "Archer.h"
#include "Character.h"
#include "Warrior.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {
  Archer archer("archer", 50, 30, 20);
  Warrior warrior("warrior", 70, 30, 20);
  Character dummy("dummy", 100, 40, 0);

  archer.useAim();
  archer.attack(warrior);
  cout << warrior.getName() << " has: " << warrior.getHeath() << " health."
       << endl;

  warrior.useRoar();
  warrior.attack(dummy);

  cout << dummy.getName() << " has: " << dummy.getHeath() << " health." << endl;

  return 0;
}
