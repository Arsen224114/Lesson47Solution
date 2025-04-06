#include <iostream>
using namespace std;

int main() {
	int size;

	cout << "Input size of array: ";
	cin >> size;

	int* numbers = new int[size];

	*(numbers + 0) = 0;
	*(numbers + 1) = 0;
	*(numbers + 2) = 0;
	*(numbers + 3) = 0;
	*(numbers + 4) = 0;
	
	cout << "Beforer: @[0]= " << numbers + 0 << " - " << *(numbers + 0) = 0 << endl;
	cout << "Beforer: @[1]= " << numbers + 1 << " - " << *(numbers + 1) = 0 << endl;
	cout << "Beforer: @[2]= " << numbers + 2 << " - " << *(numbers + 2) = 0 << endl;
	cout << "Beforer: @[3]= " << numbers + 3 << " - " << *(numbers + 3) = 0 << endl;
	cout << "Beforer: @[4]= " << numbers + 4 << " - " << *(numbers + 4) = 0 << endl;


	delete numbers;

	return 0;
}