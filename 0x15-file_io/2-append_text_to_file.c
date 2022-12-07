#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
*strlen - gets length of a string
*@str: pointer to string
*Return: length of string
*/
size_t strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
/**
*append_text_to_file - appends text at the end of a file
*@filename: pointer to file
*@text_content: string to append
*Return: 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == 1)
		return (-1);
	if (text_content != NULL)
		len = write(fd, text_content, strlen(text_content));
	close(fd);
	if (len == -1)
		return (-1);
	return (1);
}
