// #include<stdio.h>
// int main()
// {
// char pn[10];
// int arr[10],bur[10],star[10],finish[10],tat[10],wt[10],i,n;
// int totwt=0,tottat=0;
// printf("Enter the number of processes:");
// scanf("%d",&n);
// for(i=0;i<n;i++)
// {
// printf("Enter the Arrival Time & Burst Time:");
// scanf("%d%d",&arr[i],&bur[i]);
// }
// for(i=0;i<n;i++)
// {
// if(i==0)
// {
// star[i]=arr[i];
// wt[i]=star[i]-arr[i];
// finish[i]=star[i]+bur[i];
// tat[i]=finish[i]-arr[i];
// }
// else
// {
// star[i]=finish[i-1];
// wt[i]=star[i]-arr[i];
// finish[i]=star[i]+bur[i];
// tat[i]=finish[i]-arr[i];
// }
// }
// printf("\nP Name Arrtime Burtime Start TAT Finish");
// for(i=0;i<n;i++)
// {
// printf("\nP%\t%6d\t\t%6d\t%6d\t%6d\t%6d",arr[i],bur[i],star[i],tat[i],finish[i]);
// totwt+=wt[i];
// tottat+=tat[i];
// }
// printf("\nAverage Waiting time:%f", (float)totwt/n);
// printf("\nAverage Turn Around Time:%f", (float)tottat/n);
// }


// #include<stdio.h>
// int main()
// {
//     int pn[10];
//     int arr[10],bur[10],star[10],finish[10],tat[10],wt[10],i,n;
//     int totwt=0,tottat=0;
//     printf("Enter the number of processes :\n");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         printf("Enter the process name , arrival time and burst time : ");
//         scanf("%d%d%d",&pn[i],&arr[i],&bur[i]);
//     }
//      for(i=0;i<n;i++)
//      {
//         if(i==0)
//         {
//             star[i]=arr[i];
//             wt[i]=star[i]-arr[i];
//             finish[i]=star[i]+bur[i];
//             tat[i]=finish[i]-arr[i];     
//        }
//        else{
//             star[i]=finish[i-1];
//             wt[i]=star[i]-arr[i];
//             finish[i]=star[i]+bur[i];
//             tat[i]=finish[i]-arr[i];
//        }
//      }
//      printf("\nPName\t Arrtime\t Burtime\t start\t TAT\t finish");
//      for(i=0;i<n;i++)
//       {
//         printf("\n%d\t%6d\t%6d\t%6d\t%6d\t%6d",pn[i],arr[i],bur[i],star[i],tat[i],finish[i]);
//         totwt+=wt[i];
//         tottat+=tat[i];
//       }
//       printf("\nAverage waiting time : %f",(float)totwt/n);
//       printf("\nAverage turn around time : %f", (float)tottat/n);
// }


// #include<stdio.h>
// int main(){
//     /*
//     Enter the number of processes:3
//     Enter the Arrival Time & Burst Time: 2 3
//     Enter the Arrival Time & Burst Time: 5 6 
//     Enter the Arrival Time & Burst Time: 6 7

//     P Name  Arr time        Burs time       Start   TAT     Finish
//     P0      2               3               2               3               5
//     P1      5               6               5               6               11
//     P2      6               7               11              12              18

//     Average Waiting time:1.666667
//     Average turn around time:7.000000
//     */
//     int arr[10],bur[10],star[10],finish[10],tat[10],wt[10],i,n;
//     int totwt=0,tottat=0;
//     printf("Enter the number of processes:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++) {
//         printf("Enter the Arrival Time & Burst Time: ");
//         scanf("%d%d",&arr[i],&bur[i]);
//     }
//     for(i=0;i<n;i++) {
//         if(i==0) {
//             star[i]=arr[i];
//             wt[i]=star[i]-arr[i];
//             finish[i]=star[i]+bur[i];
//             tat[i]=finish[i]-arr[i];
//         } else {
//             star[i]=finish[i-1];
//             wt[i]=star[i]-arr[i];
//             finish[i]=star[i]+bur[i];
//             tat[i]=finish[i]-arr[i];
//         }
//     }
//     printf("\nP Name\tArr time\tBurs time\tStart\tTAT\tFinish\n");
//     for(i=0;i<n;i++) {
//         printf("P%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i,arr[i],bur[i],star[i],tat[i],finish[i]);
//         totwt+=wt[i];
//         tottat+=tat[i];
//     }
//     printf("\nAverage Waiting time: %f\n",(float)totwt/n);
//     printf("Average turn around time: %f\n",(float)tottat/n);
// }



#include<stdio.h>
int main(){
    int arr[10],bur[10],star[10],finish[10],tat[10],wt[10],i,n;
    int totwt=0,tottat=0;
    printf("Enter the number of processes:");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        printf("Enter the Arrival Time & Burst Time: ");
        scanf("%d%d",&arr[i],&bur[i]);
    }
    for(i=0;i<n;i++) {
        if(i==0) {
            star[i]=arr[i];
            wt[i]=star[i]-arr[i];
            finish[i]=star[i]+bur[i];
            tat[i]=finish[i]-arr[i];
        } else {
            star[i]=finish[i-1];
            wt[i]=star[i]-arr[i];
            finish[i]=star[i]+bur[i];
            tat[i]=finish[i]-arr[i];
        }
    }
    printf("\nP Name\tArr time\tBurs time\tStart\tTAT\tFinish\n");
    for(i=0;i<n;i++) {
        printf("P%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i,arr[i],bur[i],star[i],tat[i],finish[i]);
        totwt+=wt[i];
        tottat+=tat[i];
    }
    printf("\nAverage Waiting time: %f\n",(float)totwt/n);
    printf("Average turn around time: %f\n",(float)tottat/n);
}
