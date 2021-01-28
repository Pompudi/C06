#include <unistd.h>

int lenstr(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

int main(int argc, char **argv)
{
	int i;
	
	i = 1;
	while (i < argc)
	{
		write(1, argv[i], lenstr(argv[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
