#include "sort.h"

/**
 * selection_sort - Find the lowest number and put it in front
 * @array: Array to sort
 * @size: Size of the array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t f = 0;
	size_t g;
	int tem;
	int coare;
	int min_index;
	int swapped;

	if (array == NULL)
		return;
	while (f < size)
	{
		g = f;
		coare = array[f];
		swapped = 0;
		while (g < size)
		{
			if (coare > array[g])
			{
				coare = array[g];
				min_index = g;
				swapped = 1;
			}
			g++;
		}
		if (swapped == 1)
		{
			tem = array[f];
			array[f] = coare;
			array[min_index] = tem;
			print_array(array, size);
		}
		f++;
	}
}
