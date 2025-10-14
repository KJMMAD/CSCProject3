#include <iostream>
#include <iomanip>

int main() {
	int cookies;
	double sugar, butter, flour;

	std::cout << "Enter the amount of cookies you would like to make: ";
	std::cin >> cookies;
	sugar = 1.5 / 48 * cookies;
	butter = 1.0 / 48 * cookies;
	flour = 2.75 / 48 * cookies;
	std::cout << "For " << std::setprecision(3) << cookies << " cookies, you would need " << sugar << " cups of sugar, " << butter << " cups of butter, and " << flour << " cups of flour.";
	//I thought it would make the most sense to have the final values round, as trying to get certain precise measurements would be tedious.
}