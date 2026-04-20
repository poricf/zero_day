#include <stdio.h>
#include <stdlib.h>
#include "engine_21.h"

int run_core_exploit_21() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 21);
    free(buffer);
    return 0;
}
