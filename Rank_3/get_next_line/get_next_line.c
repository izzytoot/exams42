#ifndef BUFFER_SIZE
#define BUFFER_SIZE 10

#endif

#include <unistd.h>
#include <stdlib.h>

char	*join_char_to_line(char *str, char c, int len)
{
	char *new_str;
	int i = 0;

	new_str = (char *)malloc(len + 2);
	if (!new_str)
		return (NULL);
	while (i < len)
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i++] = c;
	new_str[i] = '\0';
	return (new_str);
}

char	*get_next_line(int fd)
{
	static char buffer[BUFFER_SIZE];
	static int buffer_real_size = 0;
	static int buffer_index = 0;
	char *new_line;
	int	i = 0;

	if (fd < 0 || BUFFER_SIZE < 1)
		return(NULL);
	new_line = (char *)malloc(1);
	if (!new_line)
		return(NULL);
	new_line[0] = '\0';
	while(1)
	{
		if (buffer_real_size <= buffer_index)
		{
			buffer_real_size = read(fd, buffer, BUFFER_SIZE);
			buffer_index = 0;
			if (buffer_real_size <= 0)
			{
				if (i == 0)
				{
					free(new_line);
					return (NULL);
				}
			}
			break;
		}
		new_line = join_char_to_line(new_line, buffer[buffer_index++], i);
		if (!new_line)
			return (NULL);
		if(new_line[i++] == '\n')
			break;
	}
	return (new_line);
}
/*
#include <stdio.h>
#include <fcntl.h>
int main(int ac, char **av)
{
	char *line;
	char *path = av[1];
	int fd = open(path, O_RDONLY);

	(void)ac;
	if (fd < 0)
	{
		printf("Error\n");
		return(0);
	}
	while((line = get_next_line(fd)))
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return(0);
}
*/
