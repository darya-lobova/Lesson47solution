#include "logic.h"

int main() {

	int number;

	cout << "Input number: ";
	cin >> number;

	cout << "Min digit: " << get_min_digit(number) << endl;
	cout << "Max digit: " << get_max_digit(number) << endl;

	return 0;
}