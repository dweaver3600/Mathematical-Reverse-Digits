// Prompt

//Given N, reverse the digits of N

#include <iostream>
#include <string>

#define PAUSE std::cout << "\n\n"; system("pause");


int main() {
	
	long int N;

	std::cout << "I will reverse the digits of a given number N\n\n\n";

	std::cout << "N: ";

	std::cin >> N;

	int reversed = 0;
	int remainder = 0;

	while (N != 0) {
		remainder = N % 10;
		reversed = reversed * 10 + remainder;
		N /= 10;
	}

	std::cout << reversed;

	PAUSE;
	return 0;
}