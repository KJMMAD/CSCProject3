#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main() {
	double rate, principal, interest, amount;
	int t;

	cout << "To calculate the amount of savings in your account, we need you to provide your account information.\n";
	cout << "Please enter the current balance of your account first.\n";
	cin >> principal;

	cout << "Now enter the interest rate of your account.\n";
	cin >> rate;

	cout << "Lastly, enter the number of times your interest has been compounded.\n";
	cin >> t;

	amount = principal * pow((1 + (rate / 100) / t), t);
	interest = amount - principal;

	cout << "Account information:\n";
	cout << "Interest rate: " << rate << "%\n";
	cout << "Times compounded: " << t << "\n";
	cout << "Principal: $" << fixed << setprecision (2) << principal << "\n";
	cout << "Interest: $" << interest << "\n";
	cout << "Amount in Savings: $" << amount;
}