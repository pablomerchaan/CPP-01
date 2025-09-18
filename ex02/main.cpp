#include <iostream>
#include <string>

int	main()
{
	std::string	str = "HI THIS BRAIN";

	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Dirección de str:     " << &str << std::endl;
	std::cout << "Dirección en stringPTR: " << stringPTR << std::endl;
	std::cout << "Dirección en stringREF: " << &stringREF << std::endl;
	std::cout << "Valor de str:        " << str << std::endl;
	std::cout << "Valor desde stringPTR: " << *stringPTR << std::endl;
	std::cout << "Valor desde stringREF: " << stringREF << std::endl;

	return 0;
}
