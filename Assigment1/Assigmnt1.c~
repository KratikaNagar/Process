#include<stdio.h>
#include<unistd.h>


  int main() {
    int status;
    pid_t pid;
    if (fork() == 0) {
      printf("Before process creation\n");
      execl("./executable3", "NULL", NULL);
    } else {
      printf("Inside Parent process\n");
      pid = wait( & status);

      printf("Child process having PID %d terminates with exit status %d\n", pid, status);
      printf("Execution of parent process completed\n");
    }

    return 0;
  }
