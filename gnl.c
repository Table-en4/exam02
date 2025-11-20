#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

int	ft_strlen(char *str)
{
	int	i = 0;
	while (str[i])
		i++;
	return i;
}

char	*ft_strdup(char *str)
{
	int	i = 0;
	char	*dest = malloc(ft_strlen(str) + 1);
	if (!dest)
		return NULL;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

char	*gnl(int fd)
{
	char	buffer[100000];
	static char	line[BUFFER_SIZE];
	static int	readed = 0;
	static int	j = 0;
	int		i = 0;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return NULL;
	while (1)
	{
		if (j >= readed)
		{
			readed = read(fd, buffer, BUFFER_SIZE);
			j = 0;
			if (readed == 0)
				break;
		}
		line[i++] = buffer[j++];
		if (line[i - 1] == '\n')
			break;
	}
	if (i == 0)
		return NULL;
	line[i] = '\0';
	return ft_strdup(line);
}

int	main()
{
	int	fd = open("test.txt", O_RDONLY);
	char	*line = gnl(fd);
	while (line)
	{
		printf("%s", line);
		free(line);
		line = gnl(fd);
	}
	close(fd);
	return 0;
}
