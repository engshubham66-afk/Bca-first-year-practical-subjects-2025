// reader.c
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd;
    char *myfifo = "/tmp/myfifo";
    char data[100];

    // Open FIFO for read
    fd = open(myfifo, O_RDONLY);

    // Read data from FIFO
    read(fd, data, sizeof(data));

    printf("Received message: %s", data);

    close(fd);

    return 0;
}
