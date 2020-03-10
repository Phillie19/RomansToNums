#include <iostream>
#include <map>
#include <string>

using namespace std;

int RomanToInt (string roman) {
	map <char, int> digits = { {'I', 1}, {'V', 5},{'X', 10},{'L', 50},{'C', 100}, {'D', 500}, {'M', 1000} };
	int sum = digits[roman[roman.length()-1]];
	for (int i = roman.length() - 2; i >= 0; --i) {
		if (digits[roman[i]] < digits[roman[i + 1]]) {
			sum -= digits[roman[i]];
		}
		else  {
		sum += digits[roman[i]];
		}
	}
		return sum;
	}

int main() {
		string roman;
		cin >> roman;
		cout << RomanToInt(roman);
		
}
	