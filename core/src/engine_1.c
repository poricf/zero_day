#include <stdio.h>
#include <stdlib.h>
#include "engine_1.h"

int run_core_exploit_1() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 1);
    free(buffer);
    return 0;
}
