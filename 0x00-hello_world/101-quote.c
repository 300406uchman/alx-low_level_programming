#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(void);
{
    const char message[] = "and that piece of art is useful - Dora Korpar, 2015-10-19\n";
    int fd = open("/dev/stderr", O_WRONLY);
    write(fd, message, sizeof(message) - 1);
    close(fd);
    return 1;
}

