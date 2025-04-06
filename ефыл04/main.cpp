#include "logic.h"

int main() {
	int size;

	cout << "Input size of array: ";
	cin >> size;

	int* array = new int[size];

	init(array, size, -20, 20);

	cout << "Array: " << convert(array, size) << endl;

	cout << "Sum of values: " << sum_of_values(array, size) << endl;

	delete[] array;

	return 0;
}