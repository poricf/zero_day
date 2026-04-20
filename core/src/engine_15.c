#include <stdio.h>
#include <stdlib.h>
#include "engine_15.h"

int run_core_exploit_15() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 15);
    free(buffer);
    return 0;
}
