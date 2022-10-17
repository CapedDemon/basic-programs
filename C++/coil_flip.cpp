// A program to toss the coin using C++
// uses the cstdlib, which technically is a C library though
#include <cstdlib>
#include <iostream>

int main() {
	// Makes rand() return a random value
	srand(time(0));
	int toss_res = rand() % 2;

	if(toss_res % 2 == 0) std::cout << "Heads";
	else std::cout << "Tails";
	return 0;
}