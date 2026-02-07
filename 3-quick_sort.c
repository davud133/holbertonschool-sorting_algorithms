#include "sort.h"
/**
 * quick_sort - sorts an array using quick sort algorithm
 * @array: array
 * @size: size of the array
 *
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	int *left = NULL;
	size_t n_left = 0;
	int *right = NULL;
	size_t n_right = 0;
	size_t pivot;
	int pivotv;
	size_t i;

	if (size > 1)
	{
		pivot = size - 1;
		pivotv = array[pivot];
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] < array[pivot])
			{
				n_left++;
				left = realloc(left, n_left * sizeof(int));
				left[n_left - 1] = array[i]; 
			}
			else if (array[i] > array[pivot])
			{
				n_right++;
				right = realloc(right, n_right * sizeof(int));
				right[n_right - 1] = array[i];
			}
		}
		quick_sort(left, n_left);
		quick_sort(right, n_right);
		for (i = 0; i < n_left; i++)
    			array[i] = left[i];
		array[n_left] = pivotv;
		for (i = 0; i < n_right; i++)
			array[n_left + 1 + i] = right[i];
		print_array(array,size);
		free(left);
		free(right);
	}
}
