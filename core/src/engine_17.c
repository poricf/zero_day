#include <stdio.h>
#include <stdlib.h>
#include "engine_17.h"

int run_core_exploit_17() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 17);
    free(buffer);
    return 0;
}
