#include <stdio.h>
#include <unistd.h>
#include <time.h>


static char bar[] = "======================================="
                    "======================================>";
int main() {
    int i;
    int counter = 0;
    struct timespec tim, tim2;
    tim.tv_sec = 0;
    tim.tv_nsec = 50000000;

    for (i = 77; i >= 0; i--) {
        printf("[%s] %d %% \r", &bar[i], counter);
        //fprintf(stderr, ">>%s\n", &bar[i]);
        fflush(stdout);
        //sleep(1);
        nanosleep(&tim , &tim2);
        counter = 102 - ((float)i / 77) * 100;
    }
    printf("\n");
    return 0;
}
