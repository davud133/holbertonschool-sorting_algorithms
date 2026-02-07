#include "sort.h"
/**
 * swap - swaps 2 element
 * @a: element 1
 * @b: element 2
 *
 * Return nothing
 */
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
/**
 * lomuto - helper
 * @array: array
 * @low: low point
 * @high: high point
 * @size: size
 *
 * Return: index
 */
size_t lomuto(int *array, size_t low, size_t high, size_t size)
{
	int pivot = array[high];
	size_t i = low;
	size_t j = 0;

    	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
            		{
                		swap(&array[i], &array[j]);
                		print_array(array, size);
            		}
            		i++;
		}
	}
	if (i != high)
	{
	swap(&array[i], &array[high]);
	print_array(array, size);
	}
	return i;
}
/**
 * quick_sort_rec - helper
 * @array: array
 * @low: low
 * @high: high
 * @size: size
 *
 * Return: nothing
 */
void quick_sort_rec(int *array, size_t low, size_t high, size_t size)
{
    	if (low < high)
	{
			size_t pivot_index = lomuto(array, low, high, size);
		if (pivot_index > 0)
			quick_sort_rec(array, low, pivot_index - 1, size);
		quick_sort_rec(array, pivot_index + 1, high, size);
	}
}
/**
 * quick_sort - sorts an array using quick sort algorithm
 * @array: array
 * @size: size of the array
 *
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
        	return;
	quick_sort_rec(array, 0, size - 1, size);
}
