//program to perform linear search on an array
//time complexity : worst O(n) ; best O(1) ; avg O(n) ;

#include <stdio.h>

int lsearch(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == x)
			return i + 1;
	return -1;
}

int main()
{
	int arr[] = {2, 3, 4, 10, 7, 11, 22, 16, 5, 1};
	int x = 7;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = lsearch(arr, n, x);
	if (result == -1)
		printf(" Element is Not Present in Array ");
	else
		printf(" Element is Present at Position %d ", result);
	return 0;
}