#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * bubble_sort - Sort by swapping largest items to end of array
 * @array: Array to be sorted
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int swap;
	size_t tem;
	size_t temsize;

	if (array == NULL)
		return;
	temsize = size;
	swap = 1;
	while (swap)
	{
		swap = 0;
		i = 0;
		while (i < temsize - 1)
		{
			if (array[i] > array[i + 1])
			{
				tem = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tem;
				print_array(array, size);
				swap = 1;
			}
			i++;
		}
		temsize = i;
}
}
