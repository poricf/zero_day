#include <stdio.h>
#include <stdlib.h>
#include "engine_18.h"

int run_core_exploit_18() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 18);
    free(buffer);
    return 0;
}
