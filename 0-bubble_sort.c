#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "sort.h"
/**
 * bubble_sort - sorts a list using bubble method
 * @array: array to sort
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, r;
	int a, b, k = 0;

	for (r = 0; r < size; r++)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				a = array[i];
				b = array[i + 1];
				array[i] = b;
				array[i + 1] = a;
				print_array(array, size);
				k++;
			}
			else
				continue;
		}
		if (k == 0)
			break;
	}
}
