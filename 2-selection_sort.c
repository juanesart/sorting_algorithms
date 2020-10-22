#include "sort.h"

/**
 * selection_sort - is a sorting algorithm, specifically
 * an in-place comparison sort.
 * @array: Array of the integer list
 * @size: Size of the array
 * Return: void function
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, val_min;
	int temp;

	if (size == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		val_min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[val_min] > array[j])
				val_min = j;
		}
		if (val_min != i)
		{
			temp = array[val_min];
			array[val_min] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
