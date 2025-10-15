#include <iostream>
#include <string>
#include <random>
using namespace std;
int main() {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> rNum(1, 1000);

	bool check = true;

	while (check == true){
		char ch;
		string response;
		int x = rNum(gen);
		int y = rNum(gen);
		int answer = x + y;
		
		cout << "Solve: \n" << x << " + " << y << "\n";
		cout << "When you're ready, press Enter to see the answer.";
		cin.get(ch);

		cout << "The answer was: " << answer << " Continue? [Y]/[N]\n";
		getline(cin, response);

		if (response != "y") {
			check = false;
		}
		cin.ignore();
	}
}