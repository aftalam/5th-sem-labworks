//program to implement tower of hanoi

#include <stdio.h>
void hanoi(char, char, char, int);
void main()
{
    int num;
    printf("\n enter number of disks : ");
    scanf("%d", &num);
    printf("\n tower of hanoi for %d number of disks : \n", num);
    hanoi('A', 'B', 'C', num);
}
void hanoi(char from, char to, char other, int n)
{
    if (n <= 0)
        printf("\n illegal number of disks ");
    if (n == 1)
        printf("\n move disk from %c to %c ", from, other);
    if (n > 1)
    {
        hanoi(from, other, to, n - 1);
        hanoi(from, to, other, 1);
        hanoi(to, from, other, n - 1);
    }
}