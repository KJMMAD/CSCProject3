#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int cookies;
	double sugar, butter, flour;

	cout << "Enter the amount of cookies you would like to make: ";
	cin >> cookies;
	sugar = 1.5 / 48 * cookies;
	butter = 1.0 / 48 * cookies;
	flour = 2.75 / 48 * cookies;
	cout << "For " << cookies << " cookies, you would need " << fixed << setprecision(2) << sugar << " cups of sugar, " << butter << " cups of butter, and " << flour << " cups of flour.";
	//I thought it would make the most sense to have the final values round, as trying to get certain precise measurements would be tedious.
}