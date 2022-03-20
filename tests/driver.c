#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sorts.h"

int int_cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

void arr_rand(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % n;
    }
}

void arr_check(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            printf("Error: %d > %d\n", arr[i], arr[i + 1]);
            exit(1);
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <sort> <size>\n", argv[0]);
        exit(1);
    }

    int size = atoi(argv[2]);
    int *arr = malloc(sizeof(int) * size);

    char *sort_algo = argv[1];
    sort_func sort = NULL;
    if (strcmp(sort_algo, "bubble") == 0) {
        sort = bubble_sort;
    } else if (strcmp(sort_algo, "insertion") == 0) {
        sort = insertion_sort;
    } else if (strcmp(sort_algo, "selection") == 0) {
        sort = selection_sort;
    } else if (strcmp(sort_algo, "exchange") == 0) {
        sort = exchange_sort;
    } else {
        printf("Unknown sort algorithm: %s\n", sort_algo);
        exit(1);
    }

    arr_rand(arr, size);
    sort(arr, size, sizeof(int), int_cmp);
    arr_check(arr, size);

    exit(0);
}