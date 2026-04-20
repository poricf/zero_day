#include <stdio.h>
#include <stdlib.h>
#include "engine_33.h"

int run_core_exploit_33() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 33);
    free(buffer);
    return 0;
}
