#include <stdio.h>
#include <stdlib.h>
#include "engine_42.h"

int run_core_exploit_42() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 42);
    free(buffer);
    return 0;
}
