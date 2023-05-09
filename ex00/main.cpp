#include "Zombie.hpp"

int main(void){

    Zombie monster1("Bowser (stack)");
    monster1.announce();

    Zombie *monster2 = newZombie("Godzilla (heap)");
    monster2->announce();
    (*monster2).announce();
    delete monster2;

	randomChump("King Kong");

    return (0);
}