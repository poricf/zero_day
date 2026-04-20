#include <stdio.h>
#include <stdlib.h>
#include "engine_8.h"

int run_core_exploit_8() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 8);
    free(buffer);
    return 0;
}
