#include<stdio.h>
#include<unistd.h>

int main()
{
	int i = 0;
	if(fork() == 0)
	{
		for( i = 1; i <= 3; i++)
		{
			printf("Child %d\n",i);
		}
	}
	else
	{
		
			printf("Parent %d\n",i);
		
	}
	return 0;
}


