#include "core.h"
#include <stdlib.h>

int random_int(int min, int max) {
    int value = rand() % max + min;
    return value;
}

float random_float(float min, float max) {
    float value = (float)(rand()) / RAND_MAX * (max - min) + min;
    return value;
}