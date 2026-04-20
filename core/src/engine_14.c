#include <stdio.h>
#include <stdlib.h>
#include "engine_14.h"

int run_core_exploit_14() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 14);
    free(buffer);
    return 0;
}
