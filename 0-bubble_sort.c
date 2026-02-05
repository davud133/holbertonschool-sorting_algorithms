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
	int i;
	int k;

	for (i = 0; i < size; i++)
	{
		for ( k = i + 1; k < size; k++)
		{
			if (size[i] > size[k])
			{
				t = size[k];
				size[k] = size[i];
				size[i] = t;
				print_array(array,size);
			}
		}
	}
}
