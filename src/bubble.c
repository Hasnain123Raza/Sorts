#include "sorts.h"

void bubble_sort(void *base, size_t nitems, size_t size, compare_func cmp) {
    for (int i = 0; i < nitems; i++) {
        for (int j = 0; j < nitems - i - 1; j++) {
            if (cmp(base + j * size, base + (j + 1) * size) > 0) {
                SWAP(base + j * size, base + (j + 1) * size, size);
            }
        }
    }
}