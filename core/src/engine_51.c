#include <stdio.h>
#include <stdlib.h>
#include "engine_51.h"

int run_core_exploit_51() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 51);
    free(buffer);
    return 0;
}
