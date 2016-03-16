/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>
void swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
void * sortedArrayPositionsChange(int *Arr, int len){
	if (!Arr || len < 0)
		return NULL;
	int i;

	for (i = 0; i < len - 1; i++)
	{
		if (Arr[i] > Arr[i + 1])
		{
			int j;
			for (j = len - 1; j >= i; j--)
			{
				if (Arr[j] < Arr[j - 1])
				{
					swap(&Arr[i], &Arr[j]);
					return Arr;
				}
			}
		}
	}

	return Arr;
}

