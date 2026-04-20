#include <stdio.h>
#include <stdlib.h>
#include "engine_64.h"

int run_core_exploit_64() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 64);
    free(buffer);
    return 0;
}
