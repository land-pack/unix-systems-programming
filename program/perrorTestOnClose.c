#include <stdio.h>
#include <unistd.h>
#include <errno.h>


int main(int argc, char * argv[]) {
    int fildes=99; // uninit
    printf("original errno=%d\n", errno);
    int ret = close(fildes);
    printf("ret=%d || original errno=%d\n", ret, errno);
    if (ret == -1)
        perror("Failed to close the file");
    return 0;
}
