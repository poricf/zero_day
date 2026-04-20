#include <stdio.h>
#include <stdlib.h>
#include "engine_25.h"

int run_core_exploit_25() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 25);
    free(buffer);
    return 0;
}
