#include <stdio.h>
#include <stdlib.h>
#include "engine_20.h"

int run_core_exploit_20() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 20);
    free(buffer);
    return 0;
}
