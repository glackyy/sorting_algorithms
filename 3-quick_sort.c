#include "sort.h"
void swap(int *a, int *b);
int lomuto_partition(int *array, int l, int h, size_t size);
void lomuto_sort(int *array, int l, int h, size_t size);
void quick_sort(int *array, size_t size);
/**
 * swap - Entry Function
 * @b: Pointer
 * @a: Pointer
 */
void swap(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
/**
 * lomuto_partition - Entry function
 * @size: size_t
 * @h: int
 * @l: int
 * @array: Pointer
 * Return: i + 1
 */
int lomuto_partition(int *array, int l, int h, size_t size)
{
int p, i, j;
p = array[h];
i = l - 1;
for (j = l; j < h; j++)
{
	if (array[j] < p)
	{
		i++;
		if (i != j)
		{
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
}
if (array[i + 1] > array[ħ])
{
	swap(&array[i + 1], &array[h]);
	print_array(array, size);
}
return (i + 1);
}
/**
 * lomuto_sort - Entry Function
 * @size: size_t
 * @h: int
 * @l: int
 * @array: Pointer
 */
void lomuto_sort(int *array, int l, int h, size_t size)
{
int p;
if (l < h)
{
	p = lomuto_partition(array, l, h, size);
	lomuto_sort(array, l, p - 1, size);
	lomuto_sort(array, p + 1, h, size);
}
}
/**
 * quick_sort - Entry Function
 * @size: size_t
 * @array: Pointer
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	lomuto_sort(array, 0, size - 1, size);
}
