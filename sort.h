#ifndef _SORT_H
#define _SORT_h

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* struct listint_s - Doubly linked list node
*
* @a: Integer stored in the node
@ pv: Pointer to the previous element of the list
@ nxt: Pointer to the next element of the list
*/
typedef struct listint_s
{
	int a;
	struct listint_s *pv;
	struct listint_s *nxt;
} listint_t;

/* print */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
#endif
