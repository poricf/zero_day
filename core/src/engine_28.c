#include <stdio.h>
#include <stdlib.h>
#include "engine_28.h"

int run_core_exploit_28() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 28);
    free(buffer);
    return 0;
}
