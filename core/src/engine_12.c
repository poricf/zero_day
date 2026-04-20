#include <stdio.h>
#include <stdlib.h>
#include "engine_12.h"

int run_core_exploit_12() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 12);
    free(buffer);
    return 0;
}
