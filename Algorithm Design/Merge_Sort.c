//program to perform merge sort on an array
//time complexity : worst O(n log n) ; best O(n log n) ; avg O(n log n) ;

#include <stdio.h>

void merge(int arr[], int l, int mid, int u);
void mergesort(int arr[], int l, int u);
int arr[7] = {16, 22, 11, 7, 5, 8, 7};
int temp[7];

int main()
{
	int i;
	printf(" Array Before Sorting : ");
	for (i = 0; i < 7; i++)
		printf("  %d  ", arr[i]);
	mergesort(arr, 0, 6);
	printf("\n");
	printf(" Array After Sorting : ");
	for (i = 0; i < 7; i++)
		printf("  %d  ", arr[i]);
	return 0;
}

void mergesort(int arr[], int l, int u)
{
	int mid;
	if (l != u)
	{
		mid = (l + u) / 2;
		mergesort(arr, l, mid);
		mergesort(arr, mid + 1, u);
		merge(arr, l, mid, u);
	}
}

void merge(int arr[], int l, int mid, int u)
{
	int i, j, k;
	i = l, j = mid + 1, k = l;
	while ((i <= mid) && (j <= u))
	{
		if (arr[i] <= arr[j])
		{
			temp[k] = arr[i];
			i++, k++;
		}
		else
		{
			temp[k] = arr[j];
			j++, k++;
		}
	}
	while (i <= mid)
	{
		temp[k] = arr[i];
		i++, k++;
	}
	while (j <= u)
	{
		temp[k] = arr[j];
		j++, k++;
	}
	for (i = l; i <= u; i++)
	{
		arr[i] = temp[i];
	}
}