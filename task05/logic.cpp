#include "logic.h"

int product_positive_values(int* array, int size) {
	int p = 1;

	for (int i = 1; i < size; i += 2)
	{
		int value = *(array + i);

		if (value > 0) {
			p += value;
		}
	}


	return p;
}