//program to perform naive string matching on a given string
//time complexity : O(mn)

#include <stdio.h>
#include <string.h>

void search(char *pat, char *txt)
{
	int M = strlen(pat);
	int N = strlen(txt);
	for (int i = 0; i <= N - M; i++)
	{
		int j;
		for (j = 0; j < M; j++)
			if (txt[i + j] != pat[j])
				break;
		if (j == M)
			printf(" Pattern Found at Index %d \n", i);
	}
}

int main()
{
	char txt[] = "AABAACAADAABAAABAA";
	char pat[] = "AABA";
	printf(" String : %s \n", txt);
	printf(" Pattern : %s \n", pat);
	search(pat, txt);
	return 0;
}