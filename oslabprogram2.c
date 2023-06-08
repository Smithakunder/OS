#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main(){
    pid_t pid;
    pid=vfork();
    if(pid==-1){
        perror("vfork");
        return 1;
    }else if(pid==0){
        printf("child process:hello.I'm the child!\n");
        printf("child process:My PID is %d\n",getpid());
        printf("child process:My parent's PID is %d\n",getppid());
        exit(0);
    }else{
        printf("parent process:hello.I'm the parent!\n");
        printf("parent process:My PID is %d\n",getpid());
        printf("parent process:My child's PID is %d\n",pid);
        int status;
        waitpid(pid,&status,0);
        if(WIFEXITED(status)){
            printf("parent process:child process terminated normally.\n");
        }else{
            printf("parent process:child process terminated abnormally.\n");
        }
    }
    return 0;
}