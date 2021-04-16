#include "holberton.h"
/**
 * read_textfile - Read a file and print it in stdout
 * @filename: Path of file.
 * @letters: number of letter to print.
 * Return: Number of letter it can read, 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
int o_read, o_w, fd;
o_read = o_w = fd = 0;

if (filename)
{
fd = open(filename, O_RDONLY);
if (fd != -1)
{
buffer = malloc(letters);
if (buffer)
{
o_read = read(fd, buffer, letters);
if (o_read != -1)
o_w = write(STDOUT_FILENO, buffer, o_read);
free(buffer);
}
close(fd);
}
}
if (fd == -1 || o_read == -1 || o_w == -1)
return (0);
return (o_w);
}