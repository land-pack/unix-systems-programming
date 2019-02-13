#include <stdio.h>

int global[50000] = {1,2,3,4};

int main(int argc, char * argv[]) {
    global[0] = 3;
    return 0;
}
