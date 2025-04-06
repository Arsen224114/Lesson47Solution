#include <iostream>
using namespace std;

int main() {
	int* number = new int;

	cout << "Before: number = " << number << endl;

	*number = 100;

	cout << "Before: number = " << number << endl;

	delete number;

	return 0;
}