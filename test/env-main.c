#include <stdio.h>

/**
  *main - prints the environment
  *@ac: number of items in av
  *@av: Null terminated arrayof strings
  *@env: Null terminated array of strings
  */
int main(int ac, char **av, char **env)
{
	unsigned int i;

	i = 0;
	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}
	return (0);
}
