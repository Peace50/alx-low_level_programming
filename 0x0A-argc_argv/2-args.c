#include <stdio.h>
/**
  *main - print all arguments it recieve
  *@argc: number of command line argument
  *@argv: array that contains the program command line arguement
  *Return: (0) when successful
  */
int main(int argc, char *argv[])
{
	int i;

		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}

	return (0);
}
