#ifndef SORTS_H
#define SORTS_H

#include <stddef.h>

#define SWAP(a, b, size) \
    { \
        size_t __size = (size); \
        char *__a = (a), *__b = (b); \
        do { \
            char __tmp = *__a; \
            *__a++ = *__b; \
            *__b++ = __tmp; \
        } while (--__size > 0); \
    } 

/**
 * @brief Comparator function type to be used in sorting algorithms.
 * 
 * Compares two elements and returns the result as an int.
 * Returns -1 if a < b.
 * Returns 0 if a == b.
 * Returns 1 if a > b.
 * 
 */
typedef int (*compare_func)(const void *, const void *);

/**
 * @brief Sorting function type that captures each sorting algorithm.
 * 
 * Sorts a generic array with a certain number of elements each of a
 * certain size using a comparator function.
 * 
 */
typedef void (*sort_func)(void *, size_t, size_t, compare_func);

/**
 * @brief Sorts an array using the bubble sort algorithm.
 * 
 * Bubble sort is a simple sorting algorithm that works by repeatedly
 * swapping adjacent elements if they are in the wrong order. The
 * algorithm is named for the way smaller or larger elements "bubble"
 * to the top of the list.
 * 
 * Bubble sort has a time complexity of O(n^2) and a space complexity
 * of O(1).
 * 
 * @param base Pointer to the first element of the array.
 * @param nitems Number of elements in the array.
 * @param size Size of each element in the array.
 * @param cmp Comparator function to be used in the sorting algorithm.
 */
void bubble_sort(void *base, size_t nitems, size_t size, compare_func cmp);

/**
 * @brief Sorts an array using the insertion sort algorithm.
 * 
 * Insertion sort is a simple sorting algorithm that works by taking
 * an unsorted array and repeatedly inserting each element into the
 * sorted array.
 * 
 * Insertion sort has a time complexity of O(n^2) and a space complexity
 * of O(1).
 * 
 * @param base Pointer to the first element of the array.
 * @param nitems Number of elements in the array.
 * @param size Size of each element in the array.
 * @param cmp Comparator function to be used in the sorting algorithm.
 */
void insertion_sort(void *base, size_t nitems, size_t size, compare_func cmp);

/**
 * @brief Sorts an array using the selection sort algorithm.
 * 
 * Selection sort is a simple sorting algorithm that works by taking
 * an unsorted array and repeatedly finding the minimum element and
 * swapping it with the first element.
 * 
 * Selection sort has a time complexity of O(n^2) and a space complexity
 * of O(1).
 * 
 * @param base Pointer to the first element of the array. 
 * @param nitems Number of elements in the array.
 * @param size Size of each element in the array.
 * @param cmp Comparator function to be used in the sorting algorithm.
 */
void selection_sort(void *base, size_t nitems, size_t size, compare_func cmp);

#endif