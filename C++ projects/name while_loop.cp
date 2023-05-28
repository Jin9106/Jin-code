#include <stdio.h>
#include <iostream>

int main(){
	std::string name;
	std::cout << "Enter the name : ";
	std::getline(std::cin, name);
	while (name.empty()) {
		std::cout << "You have not enter the name. \nPlease enter the name : ";
		std::getline(std::cin, name);
	}
	std::cout << "Hello " << name << std::endl;
	return 0;
}
