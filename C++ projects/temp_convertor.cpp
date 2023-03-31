#include <iostream>


int main(){
	float temp;
	char scale;
	std::cout << "			Temperature - convertor			"<< std::endl;
	std::cout << "F = Fahrenheit \n";
	std::cout << "C = Celsius \n";
	std::cout << "Choose the scale : ";
	std::cin >> scale;
	switch (scale) {
		case 'C' :
			std::cout << "Converting to Celsius... \n" ;
			std::cout << "Enter the temprature: ";
			std::cin >> temp;
			temp = (temp - 32) / 1.8;
			std::cout << "The temprature is " << temp << " degree celcius." << std::endl;
			break;
		case 'c' :
			std::cout << "Converting to Celsius... \n" ;
			std::cout << "Enter the temprature: ";
			std::cin >> temp;
			temp = (temp - 32) / 1.8;
			std::cout << "The temprature is " << temp << " degree celcius." << std::endl;
			break;
		case 'F':
			std::cout << "Converting to Fahrenheit... \n" ;
			std::cout << "Enter the temprature: ";
			std::cin >> temp;
			temp = (1.8*temp)+ 32.0 ;
			std::cout << "The temprature is " << temp << "degree fahrenhiet." << std::endl;
			break;
		case 'f':
			std::cout << "Converting to Fahrenheit... \n" ;
			std::cout << "Enter the temprature: ";
			std::cin >> temp;
			std::cout << "Converting to Fahrenheit... \n" ;
			temp = (1.8*temp)+ 32.0 ;
			std::cout << "The temprature is " << temp << "degree fahrenhiet." << std::endl;
			break;
		default:
			std::cout << "Please choose form 'C' and 'F' only " << std::endl;
			break;
	}
	return 0;
}
