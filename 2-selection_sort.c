#include "sort.h"

/**
 * selection_sort - Selects, duhh...
 * @array: Array to be sorted
 * @size: size of array
 *
 * Description: A function that sorts an array Selection sort style.
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t index, temp, jndex, min;

	if (array == NULL || array[1] == '\0')
	{
		return;
	}

	for (index = 0; index < (size - 1); index++)
	{
		min = index;

		for (jndex = index + 1; jndex < size; jndex++)
		{
			if (array[jndex] < array[min])
			{
				min = jndex;
			}
		}

		if (min != index)
		{
			temp = array[index];
			array[index] = array[min];
			array[min] = temp;

			print_array(array, size);
		}

	}
}
