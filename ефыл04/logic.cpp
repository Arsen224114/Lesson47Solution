#include "logic.h"

double calculate_avg_value(int* array, int size) {
	double sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += *(array + i);
	}

	return sum / size;
}

int sum_of_values(int* array, int size) {
	double avg = calculate_avg_value(array, size);

	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		if (*(array + i) < avg) {
			sum += *(array + i);
		}
	}

	return sum;
}