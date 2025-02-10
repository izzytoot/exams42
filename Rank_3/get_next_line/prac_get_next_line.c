#include "prac_get_next_line.h"

static char *join_char(char *str, char c, int len)
{
	char *new_str = NULL;
	int i = 0;

	new_str = (char *)malloc(len + 2);
	if (!new_str)
		return NULL;
	while (i < len)
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i++] = c;
	new_str[i] = '\0';
	free(str);
	return (new_str);
}

char *get_next_line(int fd)
{
	static char buffer[BUFFER_SIZE];
	static int buffer_real_size = 0;
	static int buffer_index = 0;
	int i = 0;
	char *line = NULL;

	if (fd < 0 || BUFFER_SIZE < 1)
		return NULL;
	line = (char *)malloc(1);
	if (!line)
		return NULL;
	line[0] = '\0';
	while (1)
	{
		if (buffer_real_size <= buffer_index)
		{
			buffer_real_size = read(fd, buffer, BUFFER_SIZE);
			buffer_index = 0;
			if ((buffer_real_size <= 0) && (i == 0))
			{
				free(line);
				return NULL;
			}
			break;
		}
		line = join_char(line, buffer[buffer_index++], i);
		if (!line)
		{
			free(line);
			return NULL;
		}
		if (line[i++] == '\n');
			break;
	}
	return (line);
}


int	main(int ac, char **av)
{
	char *get_line = NULL;
	int fd = open(av[1], O_RDONLY);

	if(fd < 0)
	{
		printf("Error\n");
		return 0;
	}
	while((get_line = get_next_line(fd)))
	{
		printf("%s", get_line);
		free(get_line);
	}
	return 0;
}