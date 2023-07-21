#include "sort.h"

/**
 * shell_sort - Sorts an array of integers in ascending order using Shell sort
 *              algorithm with Knuth sequence
 *
 * @array: The array to be sorted
 * @size: Number of elements in the array
 */
void shell_sort(int *array, size_t size)
{
	size_t interval = 1;

	/* Calculate the initial value of interval */
	while (interval < size / 3)
		interval = interval * 3 + 1;

	while (interval > 0)
	{
		size_t i, j;
		int temp = array[i];

		/* Perform insertion sort with given interval */
		for (i = interval; i < size; i++)
		{

			j = i;

			/* Shift elements that are greater than temp to the right */
			while (j >= interval && array[j - interval] > temp)
			{
				array[j] = array[j - interval];
				j -= interval;
			}

			array[j] = temp;
		}

		/* Calculate the next interval using the Knuth sequence */
		interval = (interval - 1) / 3;

		print_array(array, size);
	}
}
