//program to perform quick sort on an array
//time complexity : worst O(n^2) ; best O(n log n) ; avg O(n log n) ;

#include <stdio.h>

int part(int arr[], int l, int u);
void quicksort(int arr[], int l, int u);
int arr[7] = {16, 22, 11, 7, 5, 8, 7};

int main()
{
	int i;
	printf(" Array Before Sorting : ");
	for (i = 0; i < 7; i++)
		printf("  %d  ", arr[i]);
	quicksort(arr, 0, 6);
	printf("\n");
	printf(" Array After Sorting : ");
	for (i = 0; i < 7; i++)
		printf("  %d  ", arr[i]);
	return 0;
}

void quicksort(int arr[], int l, int u)
{
	int p;
	if (l < u)
	{
		p = part(arr, l, u + 1);
		quicksort(arr, l, p - 1);
		quicksort(arr, p + 1, u);
	}
}

int part(int arr[], int l, int u)
{
	int i, j, p, temp;
	i = l, j = u, p = arr[l];
	do
	{
		do
		{
			i = i + 1;
		} while (arr[i] < p);
		do
		{
			j = j - 1;
		} while (arr[j] > p);
		if (i < j)
		{
			temp = arr[i], arr[i] = arr[j], arr[j] = temp;
		}
	} while (i < j);
	temp = arr[l], arr[l] = arr[j], arr[j] = temp;
	return j;
}