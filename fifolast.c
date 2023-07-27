//fifo
#include<stdio.h>
int main()
{
    int i,j,n,a[50],frame[10],no,k,avail,fault=0;
    printf("\n enter the number of pages:\n");
    scanf("%d",&n);
    printf("\n enter the page number:\n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    printf("\n enter the number of frames:");
    scanf("%d",&no);
    for(i=0;i<no;i++)
    frame[i]=-1;
    j=0;
    printf("\tinput\t page frames\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\t\t",a[i]);
        avail=0;
        for(k=0;k<no;k++)
        if(frame[k]==a[i])
        avail=1;
        if(avail==0)
        {
            frame[j]=a[i];
            fault++;
            for(k=0;k<no;k++)
            printf("%d\t",frame[k]);
            j=(j+1)%no;
        }
        printf("\n");
    }
        printf("page fault is %d",fault);
        return 0;
}
    

// enter the number of pages:
// 6

//  enter the page number:
// 1
// 2
// 3
// 2
// 1
// 5

//  enter the number of frames:3
//         input    page frames
// 1               1       -1      -1
// 2               1       2       -1
// 3               1       2       3
// 2
// 1
// 5               5       2       3
// page fault is 4