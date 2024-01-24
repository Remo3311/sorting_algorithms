#include "sort.h"

/**
 * quick_sort - Super fast and impractical sorting function
 * @array: The array to be sorted
 * @size: size of the array
 **/
void quick_sort(int *array, size_t size)
{
	int *whole_arr;
	size_t full_size;

	if (array == NULL)
		return;
	whole_arr = &array[0];
	full_size = size;
	quick_sort_really(array, size, whole_arr, full_size);
}

/**
 * quick_sort_really - Used to call the partitioner to get subarrays
 * @array: The array (sub array of last call) to be sorted
 * @size: Size of the array variable
 * @whole_arr: The whole array that is to be sorted
 * @full_size: The full size of the array that's being sorted originally
 **/
void quick_sort_really(int *array, size_t size, int *whole_arr,
		       size_t full_size)
{
	size_t party;

	party = 0;

	if (size > 1)
	{
		party = partitioner(array, size, whole_arr, full_size);
		quick_sort_really(&array[0], party, whole_arr, full_size);
		quick_sort_really(&array[party], size - party, whole_arr, full_size);
	}

}

/**
 * partitioner - Finds where to split the array and swaps larger items right
 * and smaller items left
 * @array: Size of the array (sub array of last call) being sorted
 * @size: Size of the array variable
 * @whole_arr: The whole array that was being sorted
 * @full_size: Full size of the original array
 * Return: The index where the array should be split into two subarrays
 **/
size_t partitioner(int *array, size_t size, int *whole_arr, size_t full_size)
{
	int piv;
	long front;
	long en;
	int tem;

	piv = array[size - 1];
	front = -1;
	en = size;


	while (1)
	{
		do {
			front++;
		} while (array[front] < piv);
		do {
			en--;
		} while (array[en] > piv);

		if (front >= en)
		{
			return ((size_t) front);
		}
		tem = array[front];
		array[front] = array[en];
		array[en] = tem;
		print_array(whole_arr, full_size);
	}
	return (en);
}
