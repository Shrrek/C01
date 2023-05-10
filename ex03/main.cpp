#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(){
{
Weapon arma = Weapon("subfusil de asalto");
HumanA soldadoA("Bob", arma);
soldadoA.attack();
arma.setType("arco con flechas");
soldadoA.attack();
}
{
Weapon arma = Weapon("subfusil de asalto");
HumanB soldadoB("Jim");
soldadoB.attack();
soldadoB.setWeapon(arma);
soldadoB.attack();
arma.setType("arco con flechas");
soldadoB.attack();
}
return 0;
}