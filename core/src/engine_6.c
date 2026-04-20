#include <stdio.h>
#include <stdlib.h>
#include "engine_6.h"

int run_core_exploit_6() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 6);
    free(buffer);
    return 0;
}
