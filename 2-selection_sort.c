#include "sort.h"
/**
 * selection_sort - Entry Function
 * @size: size_t
 * @array: Pointer
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, m_index;
int t;
if (!array || size <= 1)
	return;
for (i = 0; i < size - 1; i++)
{
	m_index = i;
	for (j = i + 1; j < size; j++)
	{
		if (array[j] < array[m_index])
			m_index = j;
	}
	if (m_index != i)
	{
		t = array[i];
		array[i] = array[m_index];
		array[m_index] = t;
		print_array(array, size);
	}
}
}
