#include <stdio.h>
#include <stdlib.h>
#include "engine_26.h"

int run_core_exploit_26() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 26);
    free(buffer);
    return 0;
}
