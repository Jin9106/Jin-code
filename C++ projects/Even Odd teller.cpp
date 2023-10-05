#include <iostream>


int main(){
	int num;
	std::cout << "What's the number : ";
	std::cin >> num;
	num % 2 == 1? std::cout<< "Odd" << std::endl : std::cout << "Even" << std::endl;
	return 0;
}
