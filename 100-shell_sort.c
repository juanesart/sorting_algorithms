#include "sort.h"

/**
 * shell_sort - Shell sort algorithm
 * @array: unsorted data
 * @size: large of array
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	int temp;
	size_t j, gap, n;

	gap = 1;
	if (!array || size < 2)
		return;
	while (gap < size / 3)
		gap = gap * 3 + 1;
	while (gap > 0)
	{
		for (j = gap; j < size; j += 1)
		{
			temp = array[j];
			for (n = j; n >= gap && temp < array[n - gap]; n -= gap)
				array[n] = array[n - gap];
			array[n] = temp;
		}
		gap /= 3;
		print_array(array, size);
	}
}
