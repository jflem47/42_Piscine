#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFF_SIZE 4096

void	ft_putstr(char *str);

int main(int argc, char **argv)
{
    int fd;
    int ret;
    char buf[BUFF_SIZE + 1];

    if (argc == 1)
    {
        write(2, "File name missing.", 19);
        return (0);
    }
    if (argc > 2)
    {
        write(2, "Too many arguments.", 20);
        return (0);
    }
    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        write(2, "Cannot read file.", 18);
        return (0);
    }
    ret = read(fd, buf, BUFF_SIZE);
    buf[ret] = '\0';
    ft_putstr(buf);
    close(fd);
    return (0);
}
