#include <iostream>

int main(){
	
	int num;
	int guess;
	int tries = 0;
	
	srand(time(NULL));
	num = (rand() % 100) + 1 ;
	std::cout << "Ready to Guess the number??"<< std::endl;
	do {
		std::cout<< "Guess The Number_ " ;
		std::cin >> guess;
		tries++;
		if (guess < num) {
			std::cout << "Too Low!"<< std::endl;
		}
		else if (guess > num) {
			std::cout << "Too High!"<< std::endl;
		}
		else{
			std::cout << "You have guessed the Number.\n";
			std::cout << "It was "<< num << " all along " << std::endl;
			std::cout << "It took you " << tries << " tries"<< std::endl;
		}
		}while(num != guess);
}
