#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char const *argv[])
{
    if (fork() == 0) {
        printf("Child, PID: %d\n", getpid());
        printf("Child completing it's task");
        _exit(0);
    } else {
        printf("Parent, PID: %d\n", getpid());
        wait(NULL);
        printf("Child completed it's task\n");
        while(1);        
    }
    return 0;
}
