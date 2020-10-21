#include "sort.h"

/**
 * bubble_sort - bubble sort algorithms
 * @size: size input
 * @array: pointer input
 * Return: No Return
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j, sw;

	if (size == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				sw = array[j];
				array[j] = array[j + 1];
				array[j + 1] = sw;
				print_array(array, size);
			}
		}
	}
}
