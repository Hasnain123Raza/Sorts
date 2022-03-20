#include "sorts.h"

void insertion_sort(void *base, size_t nitems, size_t size, compare_func cmp) {
    for (int i = 1; i < nitems; i++) {
        for (int j = i; j > 0; j--) {
            if (cmp(base + j * size, base + (j - 1) * size) >= 0) {
                break;
            }
            
            SWAP(base + j * size, base + (j - 1) * size, size);
        }
    }
}