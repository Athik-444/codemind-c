#include<stdio.h>
#include<math.h>
int main()
{
    int n,diagonals;
    n>2;
    scanf("%d",&n);
    diagonals=n*(n-3)/2;
    printf("%d",diagonals);
    return 0;
}