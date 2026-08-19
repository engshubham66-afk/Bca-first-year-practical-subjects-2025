// writer.c
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
    int fd;
    char *myfifo = "/tmp/myfifo";
    char data[100];

    // Create FIFO
    mkfifo(myfifo, 0666);

    // Open FIFO for write
    fd = open(myfifo, O_WRONLY);

    printf("Enter message: ");
    fgets(data, sizeof(data), stdin);

    // Write data to FIFO
    write(fd, data, sizeof(data));

    close(fd);

    return 0;
}


