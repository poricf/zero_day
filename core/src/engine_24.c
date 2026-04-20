#include <stdio.h>
#include <stdlib.h>
#include "engine_24.h"

int run_core_exploit_24() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 24);
    free(buffer);
    return 0;
}
