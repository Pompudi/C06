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
	while (argc > 1)
	{
		write(1, argv[argc - 1], lenstr(argv[argc - 1]));
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
