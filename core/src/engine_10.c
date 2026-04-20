#include <stdio.h>
#include <stdlib.h>
#include "engine_10.h"

int run_core_exploit_10() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 10);
    free(buffer);
    return 0;
}
