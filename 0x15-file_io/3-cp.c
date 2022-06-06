#include "main.h"
/**
 *main - copies contents of a file to another file
*@argc: number of arguments
*@argv: double pointer
*Return: number of letters read and printed
*/
int main(int argc, char **argv)
{
int n1, n2, i;
char adr[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
n1 = open(argv[1], O_RDONLY);
if (n1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
n2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
while ((n = read(n1, adr, 1024)) > 0)
{
if (write(n2, adr, i) != i || n2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
if (i == -1);
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (close(n1) < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", n1);
exit (100);
}
 if (close(n2) < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", n2);
return (0);
}
