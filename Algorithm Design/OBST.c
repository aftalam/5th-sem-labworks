//program to calculate the optimal cost of constructing binary search tree
//time complexity : O(n^4) ;

#include <stdio.h>
#define min(a, b) (a < b ? a : b)

int findOptimalCost(int freq[], int i, int j, int level)
{
    if (j < i)
        return 0;
    int optimalCost = 1000;
    for (int k = i; k <= j; k++)
    {
        int leftOptimalCost = findOptimalCost(freq, i, k - 1, level + 1);
        int rightOptimalCost = findOptimalCost(freq, k + 1, j, level + 1);
        optimalCost = min(optimalCost, freq[k] * level + leftOptimalCost + rightOptimalCost);
    }
    return optimalCost;
}

int main()
{
    int freq[] = {22, 16, 11};
    int n = sizeof(freq) / sizeof(freq[0]);
    int result = findOptimalCost(freq, 0, n - 1, 1);
    printf(" Optimal Cost of Constructing Binary Search Tree is : %d ", result);
    return 0;
}