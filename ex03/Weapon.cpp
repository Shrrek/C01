#include "Weapon.hpp"
#include <iostream>
#include <string.h>

Weapon::Weapon(std::string type){
	Weapon::setType(type);
}

Weapon::~Weapon(){

}

std::string Weapon::getType() const{
	return (this->_type);
}

void Weapon::setType(std::string const type){
	this->_type = type;
}