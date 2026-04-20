#include <stdio.h>
#include <stdlib.h>
#include "engine_60.h"

int run_core_exploit_60() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 60);
    free(buffer);
    return 0;
}
