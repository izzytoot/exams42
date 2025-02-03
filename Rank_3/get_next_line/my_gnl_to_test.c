#include "my_gnl.h"

static char *join_char(char *str, char c, int len)
{
	char *new_str;
	int	i;

	new_str = (char *)malloc(len + 2);
	if (!new_str)
		return(NULL);
	i = 0;
	while(i < len)
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
	static int buffer_size = 0;
	static int buffer_index = 0;
	char *line = NULL;
	char c;
	int	i = 0;

	if(BUFFER_SIZE < 1 || fd < 0)
		return (NULL);
	line = (char *)malloc(1);
	if(!line)
		return (NULL);
	line[0] = '\0';
	while(1)
	{
		if(buffer_index >= buffer_size)
		{
			buffer_size = read(fd, buffer, BUFFER_SIZE);
			buffer_index = 0;
			if(buffer_size <= 0)
			{
				if(i == 0)
				{
					free(line);
					return (NULL);
				}
				return (line);
			}
		}
		c = buffer[buffer_index++];
		line = join_char(line, c, i);
		if(!line)
			return (NULL);
		if(c == '\n')
			break;
		i++;
	}
	return (line);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	char *path = av[1];
	int	fd = open(path, O_RDONLY);
	char *line;

	(void)ac;
	if(fd < 0)
	{
		printf("Error\n");
		return (0);
	}
	while((line = get_next_line(fd)))
	{
		printf("%s", line);
		free(line);
	}
	return (0);
}
