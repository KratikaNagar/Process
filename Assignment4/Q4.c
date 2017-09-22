#include<stdio.h>
#include<unistd.h>

int main()
{
	int i = 0,status;
	pid_t pid;
	if(fork() == 0)
	{
		for( i = 1; i <= 2; i++)
		{
			printf("Child %d\n",i);
		}
	}
	else
	{
			
			printf("Parent %d\n",i);
			pid = wait(&status);
			printf("pid %d status %d",pid,status);
			printf("Execution of parent process completed\n");
	}
	return 0;
}


