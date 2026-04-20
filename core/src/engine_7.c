#include <stdio.h>
#include <stdlib.h>
#include "engine_7.h"

int run_core_exploit_7() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 7);
    free(buffer);
    return 0;
}
