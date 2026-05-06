#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	upper_letters = 0;
		int	i = 0;
		int	j = 0;
		char	*camel_case;	

		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				upper_letters++;
			}
			i++;
		}
		camel_case = malloc((upper_letters + i + 1) * sizeof(char));
		if (!camel_case)
			return (1);
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (!(argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
			{
				camel_case[j] = argv[1][i];
			}
			else
			{
				camel_case[j] = '_';
				j++;
				camel_case[j] = argv[1][i] + 32;
			}
			i++;
			j++;


		}
		camel_case[j] = '\0';
		write(1, camel_case, j);
		free(camel_case);
	}
	write(1, "\n", 1);
	return (0);
}
