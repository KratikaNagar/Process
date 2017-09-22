#include <stdio.h> 
#include <unistd.h>

  int main() {
    int status;
    pid_t pid1, pid2, pid;

    if ((pid1 = fork()) == 0) {
      printf("child1 process created\n");
      printf("process_id:%d\nparent_process_id:%d\n", getpid(), getppid());
      if ((pid2 = fork()) == 0) {
        printf("child2 process created\n");
        printf("process_id:%d\nparent_process_id:%d\n", getpid(), getppid());
      }
      pid = wait( & status);

    } else {
      printf("In parent process\n");
      pid = wait( & status);
      printf("parent process exit");

    }
    return 0;
  }
