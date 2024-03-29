//lru
#include<stdio.h>
#include<limits.h>
int checkHit(int incomingPage,int queue[],int occupied){
    for(int i=0;i<occupied;i++){
        if(incomingPage==queue[i])
        return 1;
    }
    return 0;
}
void printFrame(int queue[],int occupied)
{
    for(int i=0;i<occupied;i++)
    printf("%d\t\t\t",queue[i]);
}
int main()
{
    //int incomingStreams[]={7,0,1,2,0,3,0,4,2,3,0,3,2,1};
    //int incomingStreams[]={1,2,3,2,1,5,2,1,6,2,1,6,2,5,6,3,1,3,6,1,2,}
    int incomingStream[]={1,2,3,2,1,5,2,1,6,2,5,6,3,1,3};
    int n=sizeof(incomingStream)/sizeof(incomingStream[0]);
    int frames=3;
    int queue[n];
    int distance[n];
    int occupied=0;
    int pagefault=0;
    printf("page\t frame1 \t frame2 \t frame3\n");
    for(int i=0;i<n;i++)
    {
        printf("%d:   \t\t",incomingStream[i]);
        if(checkHit(incomingStream[i],queue,occupied)){
            printFrame(queue,occupied);
        }
        else if(occupied<frames){
            queue[occupied]=incomingStream[i];
            pagefault++;
            occupied++;
            printFrame(queue,occupied);
        }
        else{
            int max=INT_MIN;
            int index;
            for(int j=0;j<frames;j++)
            {
                distance[j]=0;
                for(int k=i-1;k>=0;k--)
                {
                    ++distance[j];
                    if(queue[j]==incomingStream[k])
                    break;
                }
                if(distance[j]>max){
                    max=distance[j];
                    index=j;
                }
        }
        queue[index]=incomingStream[i];
        printFrame(queue,occupied);
        pagefault++;

        }
        printf("\n");
    }
    printf("page fault:%d",pagefault);
    return 0;
}
//  output
//  page     frame1          frame2          frame3
// 1:              1
// 2:              1                       2
// 3:              1                       2                       3
// 2:              1                       2                       3
// 1:              1                       2                       3
// 5:              1                       2                       5
// 2:              1                       2                       5
// 1:              1                       2                       5
// 6:              1                       2                       6
// 2:              1                       2                       6
// 5:              5                       2                       6
// 6:              5                       2                       6
// 3:              5                       3                       6
// 1:              1                       3                       6
// 3:              1                       3                       6
// page fault:8