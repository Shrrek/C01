
#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	std::string 	line;
	std::string 	newname(argv[1]);
	std::string		s1(argv[2]);
	std::string		s2(argv[3]);
	std::ifstream	myinfile;
	std::ofstream	myoutfile;
	int				initposition;
	int				endposition;
	
	if (argc != 4)
	{
		std::cout<<"Error. Bad arguments."<<std::endl;
		std::cout<<"Use: ./replace file string1 string2."<<std::endl;
		return (1);
	}
	myinfile.open(argv[1]);
	if (!myinfile.is_open())
	{
		std::cout << "Error openning the file"<<std::endl;		
		return (0);
	}
	myoutfile.open(newname.append(".replace"));
	if (!myoutfile.is_open())
	{
		std::cout << "Error writting the file"<<std::endl;
		exit(0);
	}
	while (getline(myinfile, line))
	{
		while (line.find(s1) != std::string::npos)/*diferente de NULL*/
		{
			initposition = line.find(s1);
			endposition = s1.length();
			line.erase(initposition, endposition);
			line.insert(initposition, s2);
		}		
		myoutfile<<line<<std::endl;
	}
	myinfile.close();
	myoutfile.close();
	return (0);
}