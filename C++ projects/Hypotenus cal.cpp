#include <iostream>
#include <cmath>


int main(){
	double a;
	double b;
	double c;
	std::cout << "What's A : ";
	std::cin >> a;
	std::cout << "What's B : ";
	std::cin >> b;
	a = pow(a, 2);
	b = pow(b, 2);
	c = a + b;
	c = sqrt(c);
	std::cout << "Hypotenus is " << c << std::endl;
	return 0;
}
