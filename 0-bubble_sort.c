#include "sort.h"
/**
 * bubble_sort - sorts an array using bubble sort algorithm
 * @array: array whivh needs to be sorted
 * @size: size of the array
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	int t;
	size_t i;
	size_t k;

	for (i = 0; i < size; i++)
	{
		for ( k = 0; k + 1 < size; k++)
		{
			if (array[k] > array[k + 1])
			{
				t = array[k];
				array[k] = array[k + 1];
				array[k + 1] = t;
				print_array(array,size);
			}
		}
	}
}
