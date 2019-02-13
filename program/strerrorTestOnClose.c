#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>


int main(int argc, char * argv[]) {
    int fildes = 99;
    int ret = 0;

    ret = close(fildes);
    fprintf(stderr, "Failed to close the file! %d %s\n", fildes, strerror(errno));
    return 0;
}

