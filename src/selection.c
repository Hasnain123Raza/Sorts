#include "sorts.h"

void selection_sort(void *base, size_t nitems, size_t size, compare_func cmp) {
    for (int i = 0; i < nitems; i++) {
        int min = i;

        for (int j = i + 1; j < nitems; j++) {
            if (cmp(base + j * size, base + min * size) < 0) {
                min = j;
            }
        }
        
        if (min != i) {
            SWAP(base + i * size, base + min * size, size);
        }
    }
}