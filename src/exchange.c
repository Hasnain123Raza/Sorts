#include "sorts.h"

void exchange_sort(void *base, size_t nitems, size_t size, compare_func cmp) {
    for (int i = 0; i < nitems - 1; i++) {
        for (int j = i + 1; j < nitems; j++) {
            if (cmp(base + i * size, base + j * size) > 0) {
                SWAP(base + i * size, base + j * size, size);
            }
        }
    }
}