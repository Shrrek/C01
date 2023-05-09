#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	this->_name = name;
}

Zombie::~Zombie(){
	std::cout<<this->_name<<": closed."<<std::endl;
}

void Zombie::announce (void){
	std::cout<<this->_name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}