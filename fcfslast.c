#include<stdio.h>
#include<stdlib.h>
int main()
{
    int RQ[100],i,n,TotalHeadMoment=0,initial;
    printf("enter the number of requests\n");
    scanf("%d",&n);
    printf("enter the request sequence\n");
    for(i=0;i<n;i++)
    scanf("%d",&RQ[i]);
    printf("enter the initial position\n");
    scanf("%d",&initial);
    printf("sequence of request access:\n");
        for(i=0;i<n;i++)
        {
            printf("%d\t",RQ[i]);
            TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
            initial=RQ[i];
        }
        printf("\n total head movement is %d",TotalHeadMoment);
    return 0;
}


//output:
// enter the number of requests
// 7
// enter the request sequence
// 82
// 170
// 43
// 140
// 24
// 16
// 190
// enter the initial position
// 50
// sequence of request access:
// 82      170     43      140     24      16      190
//  total head movement is 642

