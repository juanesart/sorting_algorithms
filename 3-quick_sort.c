#include "sort.h"

/**
 * quick_sort -  quick sort algorithm
 *
 * @array: sort data
 * @size: size input
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	rec_sort(array, size, 0, size - 1);
}
/**
 * rec_sort - recursive function for partition
 * @arr: Array of the integer list
 * @size: Size of the array
 * @min: value min
 * @max: value max
 *
 * Return: void function
 */
void rec_sort(int arr[], size_t size, int min, int max)
{
	int parte;

	if (min < max)
	{
		parte = part(arr, size, min, max);

		rec_sort(arr, size, min, parte - 1);
		rec_sort(arr, size, parte + 1, max);
	}
}



/**
 * part - partitions array
 * @arr: Array of the integer list
 * @size: Size of the array
 * @low: low of array
 * @high: high of array
 * Return: void function
 */

int part(int arr[], size_t size, int low, int high)
{
	int pivot = arr[high];
	int i = (low - 1), j, temp;

	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			if (i != j)
				print_array(arr, size);
		}
	}
	i++;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
	if (i != j)
		print_array(arr, size);
	return (i);
}
