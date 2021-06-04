#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main()
{
	pid_t pid;
	int fd[2];
	char buffer[1000];
	char *argv[4] = {"ls", "-l", "-a", NULL};

	if (pipe(fd) < 0)
		printf("Cannot create pipe\n");

	printf("\nĆwiczenie laboratoryjne nr 2-3\n");

	pid = fork();

	if (pid < 0)
	{
		printf("Cannot create a child process, err = %d\n", pid);
	}
	else if (pid == 0)
	{
		close(fd[0]);
		dup2(fd[1],1);
		execvp(argv[0], argv);
		close(fd[1]);
	}
	else
	{
		close(fd[1]);
		printf("\nProces rodzica\n");
		read(fd[0], buffer, 1000);
		printf("\n%s \n", buffer);
		close(fd[0]);
	}

	return 0;
		
}

