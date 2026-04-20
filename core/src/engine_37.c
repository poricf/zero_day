#include <stdio.h>
#include <stdlib.h>
#include "engine_37.h"

int run_core_exploit_37() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 37);
    free(buffer);
    return 0;
}
