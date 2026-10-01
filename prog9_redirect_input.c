#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd = open("input.txt", O_RDONLY);

    if (fd < 0) {
        perror("open");
        return 1;
    }

    if (dup2(fd, STDIN_FILENO) < 0) {
        perror("dup2");
        close(fd);
        return 1;
    }

    close(fd);

    char ch;

    while (read(STDIN_FILENO, &ch, 1) > 0) {
        write(STDOUT_FILENO, &ch, 1);
    }

    return 0;
}
