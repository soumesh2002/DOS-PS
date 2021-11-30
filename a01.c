#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
	if (fork() == 0)
	{
		printf("Child, PID: %d\n", getpid());
		while(1);
	}
	else
	{
		printf("Parent, PID: %d\n", getpid());
		while(1);
	}

	return 0;
}
