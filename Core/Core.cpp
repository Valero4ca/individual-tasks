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

int* BubleSortInt(int* array, int array_size, bool direction) {
    switch (direction) {
    
    case 0: {
        for (int i = 0; i < array_size; i++) {
            for (int j = 0; j < array_size - 1; j++) {
                if (array[j] < array[j + 1]) {
                    int temp = array[j + 1];
                    array[j + 1] = array[j];
                    array[j] = temp;
                }
            }
        }
        break;
    }

    case 1: {
        for (int i = 0; i < array_size; i++) {
            for (int j = 0; j < array_size - 1; j++) {
                if (array[j] > array[j + 1]) {
                    int temp = array[j + 1];
                    array[j + 1] = array[j];
                    array[j] = temp;
                }
            }
        }
        break;
    }
    }
    return array;
}

float* BubleSortFloat(float* array, float array_size, bool direction) {
    switch (direction) {

    case 0: {
        for (int i = 0; i < array_size; i++) {
            for (int j = 0; j < array_size - 1; j++) {
                if (array[j] < array[j + 1]) {
                    float temp = array[j + 1];
                    array[j + 1] = array[j];
                    array[j] = temp;
                }
            }
        }
        break;
    }

    case 1: {
        for (int i = 0; i < array_size; i++) {
            for (int j = 0; j < array_size - 1; j++) {
                if (array[j] > array[j + 1]) {
                    float temp = array[j + 1];
                    array[j + 1] = array[j];
                    array[j] = temp;
                }
            }
        }
        break;
    }
    }
    return array;
}