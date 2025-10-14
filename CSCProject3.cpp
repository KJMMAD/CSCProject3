#include <iostream>

int main() {
	int cookies;
	double sugar, butter, flour;

	std::cout << "Enter the amount of cookies you would like to make:";
	std::cin >> cookies;
	std::cout << cookies;
	sugar = 1.5 / 48 * cookies;
	std::cout << sugar;
}