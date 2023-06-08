#include<stdio.h>
#include<unistd.h>
int main(){
    int loc=6;
    int pid=vfork();
    if(pid==0){
        printf("child process pid=%d\n",getpid());
        printf("its parent process pid=%d\n",getppid());
        loc++;
    }
    else{
        sleep(2);
        printf("parent process pid=%d\n",getpid());
        printf("its parent process pid=%d\n",getppid());
    }
    printf("loc=%d\n",loc);
    _exit(2);
}