#include <stdio.h>  // fprintf
#include <unistd.h> // close
#include <string.h> // strerror
#include <errno.h> // errno

//#define DEBUG

int main(int argc, char * argv[]) {
    int fildes = 9;
    if (close(fildes) == -1) {

#ifdef DEBUG
        fprintf(stderr, "This is debug message: file descriptor=%d\t%s\n", fildes, strerror(errno));
#endif
        perror("This is std tips");
    }
    return 0;
}
