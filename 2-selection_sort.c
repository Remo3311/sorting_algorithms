#include "sort.h"

/**
 * selection_sort - Find the lowest number and put it in front
 * @array: Array to sort
 * @size: Size of the array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t a = 0;
	size_t b;
	int tem;
	int coare;
	int min_ind;
	int swap;

	if (array == NULL)
		return;
	while (a < size)
	{
		b = a;
		coare = array[a];
		swap = 0;
		while (b < size)
		{
			if (coare > array[b])
			{
				coare = array[a];
				min_ind = b;
				swap = 1;
			}
			b++;
		}
		if (swap == 1)
		{
			tem = array[a];
			array[a] = coare;
			array[min_ind] = tem;
			print_array(array, size);
		}
		a++;
	}
}
