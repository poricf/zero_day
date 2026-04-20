#include <stdio.h>
#include <stdlib.h>
#include "engine_4.h"

int run_core_exploit_4() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 4);
    free(buffer);
    return 0;
}
