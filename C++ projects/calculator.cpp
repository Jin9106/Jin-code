#include <iostream>
#include <cmath>

int main(){
	char op;
	double num1;
	double num2;
	
	std::cout << "****CALCULATOR****" << std::endl;
	
	std::cout << "What you wanna do (+,-,*,/): " ;
	std::cin >> op;
	std::cout << "Number 1 : ";
	std::cin >> num1;
	std::cout << "Number 2 : ";
	std::cin >> num2;
	switch (op) {
		case '+' :
			std::cout << "Result : " << num1+num2 << '\n' ;
			break;
		case '-' :
			std::cout << "Result : " << num1-num2 << '\n' ;
			break;
		case '*' :
			std::cout << "Result : " << num1*num2 << '\n' ;
			break;
		case '/' :
			std::cout << "Result : " << num1/num2 << '\n' ;
			break;
		default:
			std::cout << "Invalid input" << '\n';
			break;
	}
}
