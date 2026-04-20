#include <stdio.h>
#include <stdlib.h>
#include "engine_50.h"

int run_core_exploit_50() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 50);
    free(buffer);
    return 0;
}
