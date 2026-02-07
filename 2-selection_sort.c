#include "sort.h"
/**
 * selection_sort - sorts an array using selection sort algorithm
 * @array: array
 * @size: size of the array
 *
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	int min_index = 0;
	int current = 0;
	size_t i, k;

	for (i = 0; i < size; i++)
	{
		for (k = current + 1; k < size; k++)
		{
			if (array[k] < array[min_index])
			{
				min_index = k;
			}
		}
		if (min_index != current)
		{
			k = array[min_index];
			array[min_index] = array[current];
			array[current] = k;
			print_array(array, size);
		}
		current++;
		min_index = current;
	}
}	
