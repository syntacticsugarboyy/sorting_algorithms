#include "sort.h"

/**
 * quick_sort - sorts quickly
 * @array: Array to be sorted
 * @size: Size of array
 *
 * Description: A function that sorts an array Quick sort style.
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (size < 2)
	{
		return;
	}

	quick_repeat(&array, 0, (size - 1), size);
}

/**
 * quick_repeat - recursive energy
 * @array: array
 * @bottom: low
 * @top: high
 * @size: size
 *
 * Return: void
 */

void quick_repeat(int **array, size_t bottom, size_t top, size_t size)
{
	size_t part;

	if (bottom < top)
	{
		part = sep(array, bottom, top, size);

		if (part != 0)
		{
			quick_repeat(array, bottom, (part - 1), size);
		}

		if (part < size - 1)
		{
			quick_repeat(array, part + 1, top, size);
		}
	}
}

/**
 * sep - partitioons an array
 * @array: array
 * @bottom: low
 * @top: high
 * @size: size
 *
 * Return: void
 */

size_t sep(int **array, size_t bottom, size_t top, size_t size)
{
	size_t index, jndex;
	int temp, curr;

	curr = (*array)[top];
	index = bottom - 1;

	for (jndex = bottom; jndex < top; jndex++)
	{
		if ((*array)[jndex] <= curr)
		{
			index++;
			temp = (*array)[jndex];
			(*array)[index] = (*array)[jndex];
			(*array)[jndex] = temp;

			if ((*array)[index] !=  (*array)[jndex])
			{
				print_array(*array, size);
			}
		}
	}

	temp = (*array)[index + 1];
	(*array)[index + 1] = (*array)[top];
	(*array)[top] = temp;

	if ((*array)[index + 1] != (*array)[top])
	{
		print_array(*array, size);
	}
	return (index + 1);
}
