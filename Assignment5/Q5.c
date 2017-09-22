#include <stdio.h>
#include <stdlib.h>

int main()
{
    pid_t pid = 0;
    pid_t sid = 0;
    pid = fork();// fork a new child process

    if (pid < 0)
    {
        printf("fork failed!\n");
        exit(1);
    }

    if (pid > 0)// its the parent process
    {
       printf("pid of child process %d \n", pid);
       printf("pid of parent process %d \n",getppid());  

        exit(0); //terminate the parent process succesfully
    }
 printf("pid of  process %d \n",getpid() );  
 printf("pid of init process %d \n",getppid() );    
    system("ps -p 1940 -o comm=");
    return (0);
}

