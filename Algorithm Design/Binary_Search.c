//program to perform binary search on an array
//time complexity : worst O(log n) ; best O(1) ; avg O(log n) ;

#include <stdio.h>

int bsearch(int arr[], int l, int r, int x)
{
	if (r >= l)
	{
		int mid = l + (r - l) / 2;
		if (arr[mid] == x)
			return mid + 1;
		if (arr[mid] > x)
			return bsearch(arr, l, mid - 1, x);
		return bsearch(arr, mid + 1, r, x);
	}
	return -1;
}

int main()
{
	int arr[] = {2, 3, 4, 10, 7, 11, 22, 16, 5, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 11;
	int result = bsearch(arr, 0, n - 1, x);
	if (result == -1)
		printf(" Element is Not Present in Array ");
	else
		printf(" Element is Present at Position %d ", result);
	return 0;
}