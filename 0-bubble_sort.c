#include "sort.h"
/**
 *bubble_sort - Function that sorts an array of ints
 *using bubble sort algorithm
 *
 *@array: array of ints
 *@size: size of array
 *
 */
void bubble_sort(int *array, size_t size)
{
int tem;
size_t j, q;

if (!array || !size)
return;

j = 0;
while (j < size)
{
for (q = 0; q < size - 1; q++)
{
if (array[q] > array[q + 1])
{
tem = array[q];
array[q] = array[q + 1];
array[q + 1] = tem;
print_array(array, size);
}
}
j++;
}
}
