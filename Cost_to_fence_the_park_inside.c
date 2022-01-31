#include<stdio.h>
int main()
{
    int L,B,W,C;
    scanf("%d %d %d %d",&L,&B,&W,&C);
    int area;
    if(L<=2*W||B<=2*W)
    {
        printf("Impossible");
    }
    else
    {
        area =(L*B)-((L-2*W)*(B-2*W));
        printf("%d",area*C);
    }
    return 0;
}