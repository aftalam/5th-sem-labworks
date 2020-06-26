//program to calculate longest common subsequence
//time complexity : O(mn) ;

#include <stdio.h>
#include <string.h>

int calc(char *X, char *Y)
{
	int i, j;
	int m = strlen(X);
	int n = strlen(Y);
	int C[m + 1][n + 1];
	for (i = 1; i <= m; i++)
		C[i][0] = 0;
	for (j = 0; j <= n; j++)
		C[0][j] = 0;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (X[i] == Y[j])
			{
				C[i][j] = C[i - 1][j - 1] + 1;
			}
			else if (C[i - 1][j] >= C[i][j - 1])
			{
				C[i][j] = C[i - 1][j];
			}
			else
			{
				C[i][j] = C[i][j - 1];
			}
		}
	}
	return C[m][n];
}

int main()
{
	int result;
	char X[] = "ABCBDAB";
	char Y[] = "BDCABA";
	printf(" String X = %s ", X);
	printf("\n String Y = %s ", Y);
	printf("\n Length of Longest Common Subsequence : ");
	result = calc(X, Y);
	printf("%d", result);
	return 0;
}