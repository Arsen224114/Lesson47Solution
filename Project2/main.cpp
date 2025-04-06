#include <iostream>
#include "logic.h"
#define BUF 100
using namespace std;

int main() {
    int size = 10;
	int array[BUF];

	cout << "Input size of array: ";
	cin >> size;

	cout << "Input elements of array: ";
	for (int i = 0; i < size; i++)
	{
		cout << "[" << i + 1 << "]: ";
		cin >> array[i];
	}

	cout << "Array: ";
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}

	cout << "\n Count of even elements is " << count_even_elements(array, size) << endl;

	return 0;
}