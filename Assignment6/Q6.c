#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>

int main(int argc, char* argv[])
{
    pid_t pid = 0;
    FILE *fp= NULL;
	DIR *dir;
	struct dirent *entry;
    pid = fork();// fork a new child process

    if (pid < 0)
    {
        printf("fork failed!\n");
        exit(1);
    }

if ((dir = opendir(argv[1])) == NULL)
	{
		printf("Unable to open specified directory\n");
		return -1;
	}

    fp = fopen ("demo.txt", "w+");
while ((entry = readdir(dir)) != NULL)
    {
        fprintf(fp, "%s\n", entry->d_name);
//printf("Name: %s\t", entry->d_name);
    }
    fclose(fp);
	closedir(dir);  
    return (0);
}

