#include <stdio.h>
#include <unistd.h>

/**
  *main - PID
  *
  *Return: Always 0.
  */
int main(void)
{
	pid_t pid;
	pid_t ppid;

	pid = getpid();
	ppid = getppid();
	printf("%u\n", pid);
	printf("%u\n", ppid);
	return (0);
}
