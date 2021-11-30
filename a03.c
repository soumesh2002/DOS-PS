#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char const *argv[])
{
    if (fork() == 0) {
        printf("Child, PID: %d\n", getpid());
        while(1);
    }

    else {
        printf("Parent, PID: %d\n", getpid());
        _exit(0);
    }
    return 0;
}
