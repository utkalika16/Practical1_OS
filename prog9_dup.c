#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd = open("prog9_dup_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

    if (fd < 0) {
        perror("open");
        return 1;
    }

    int newfd = dup(fd);

    if (newfd < 0) {
        perror("dup");
        close(fd);
        return 1;
    }

    write(fd, "Written using original fd\n", 26);
    write(newfd, "Written using duplicated fd\n", 28);

    close(fd);
    close(newfd);

    return 0;
}
