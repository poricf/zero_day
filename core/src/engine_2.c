#include <stdio.h>
#include <stdlib.h>
#include "engine_2.h"

int run_core_exploit_2() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 2);
    free(buffer);
    return 0;
}
