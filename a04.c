#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char const *argv[])
{
    if (fork() == 0) {
        printf("Child, PID: %d\n", getpid());
        while (1);
    } else {
        printf("Parent, PID: %d\n", getpid());
        wait(NULL);
        printf("Child completed it's task");
        while(1);
    }
    return 0;
}
