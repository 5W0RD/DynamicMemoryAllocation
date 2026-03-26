#include "functions.h"
#include <stdio.h>

void displayData(int *ptr, int size) {
    int i;

    for (i = 0 ; i < size ; i++) {
        printf ("%d", *(ptr + i));

    }
}