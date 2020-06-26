//program to perform selection sort on an array
//time complexity : worst O(n^2) ; best O(n^2) ; avg O(n^2) ;

#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectsort(int arr[], int n)
{
	int i, j, min;
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[min])
				min = j;
		swap(&arr[min], &arr[i]);
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
	selectsort(arr, n);
	printf(" Array After Sorting : ");
	printArray(arr, n);
	return 0;
}