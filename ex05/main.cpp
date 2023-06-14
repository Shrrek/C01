#include "Harl.hpp"
//typedef void (Harl::*Harlback)(std::string);

int main(int argc, char **argv)
{
	

	/*Harlback    ptr = &Harl::complain;//la instancia aun no existe
	Harl    c;

	(c.*ptr)((std::string)level);*/

	if (argc == 2)
	{
		std::string level(argv[1]);
		Harl    object;
		object.complain(level);
	}
	else
	{
		std::cout<<"Use just one argument:"<<std::endl;
		std::cout<<"DEBUG."<<std::endl;
		std::cout<<"INFO."<<std::endl;
		std::cout<<"WARNING."<<std::endl;
		std::cout<<"ERROR."<<std::endl;
		return (1);
	}
	return (0);
}