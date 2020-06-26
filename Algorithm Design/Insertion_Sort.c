//program to perform insertion sort on an array
//time complexity : worst O(n^2) ; best O(n) ; avg O(n^2) ;

#include <stdio.h>

void insertsort(int arr[], int n)
{
	int i, k, j;
	for (i = 1; i < n; i++)
	{
		k = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > k)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = k;
	}
}

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d  ", arr[i]);
	printf("\n");
}

int main()
{
	int arr[] = {2, 3, 7, 1, 22, 11, 5, 16, 8, 33};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf(" Array Before Sorting : ");
	printArray(arr, n);
	insertsort(arr, n);
	printf(" Array After Sorting : ");
	printArray(arr, n);
	return 0;
}