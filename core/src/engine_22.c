#include <stdio.h>
#include <stdlib.h>
#include "engine_22.h"

int run_core_exploit_22() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 22);
    free(buffer);
    return 0;
}
