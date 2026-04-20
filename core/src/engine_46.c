#include <stdio.h>
#include <stdlib.h>
#include "engine_46.h"

int run_core_exploit_46() {
    char *buffer = malloc((1024));
    if (!buffer) return -1;
    printf("Executing core ops [Thread %d]...\n", 46);
    free(buffer);
    return 0;
}
