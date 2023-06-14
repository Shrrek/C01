#include "Harl.hpp"

Harl::Harl(){
	std::cout<<"Llamamos al constructor."<<std::endl;
}

Harl::~Harl(){
	std::cout<<"Llamamos al destructor."<<std::endl;
}

void Harl::debug(void){
	std::cout<<"[DEBUG]"<<std::endl;;
	std::cout<<"I love to get extra bacon for";
 	std::cout<<"my 7XL-double-cheese-triple-pickle-special-ketchup burger.";
 	std::cout<<"I just love it!"<<std::endl;
}
void Harl::info(void){
	std::cout<<"[INFO] "<<std::endl;
 	std::cout<<"I cannot believe adding extra bacon cost more money. ";
	std::cout<<"You don't put enough! ";
	std::cout<<"If you did I would not have to ask for it!"<<std::endl;
}
void Harl::warning(void){
 	std::cout<<"[WARNING] "<<std::endl;
 	std::cout<<"I think I deserve to have some extra bacon for free. ";
 	std::cout<<"I've been coming here for years ";
 	std::cout<<"and you just started working here last month."<<std::endl;	
}
void Harl::error(void){
 	std::cout << "[ERROR] "<<std::endl;
 	std::cout << "This is unacceptable, ";
 	std::cout << "I want to speak to the manager now."<<std::endl;	
}

void    Harl::complain(std::string level){
	void (Harl::*Harlback)(void) = NULL;
	//typedef void (Harl::*Harlback)(void);
	std::string	choice[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = 0;

	//while (level.compare(choice[i]) && i < 4)
	while (level != choice[i] && i < 4 )
		i++;
	
	switch (i)
	{
		case	0:
			Harlback = &Harl::debug;
			break;
		case	1:
			Harlback = &Harl::info;
			break;
		case	2:
			Harlback = &Harl::warning;
			break;
		case	3:
			Harlback = &Harl::error;
			break;
		case	4:
			std::cout<<"Error in argument."<<std::endl;
			return;
	}
	(this->*(Harlback))();
};
