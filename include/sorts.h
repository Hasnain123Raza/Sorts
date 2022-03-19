#ifndef SORTS_H
#define SORTS_H

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

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
 * Bubble sort has a complexity of O(n^2) in the worst case.
 * 
 * @param base Pointer to the first element of the array.
 * @param nitems Number of elements in the array.
 * @param size Size of each element in the array.
 * @param cmp Comparator function to be used in the sorting algorithm.
 */
void bubble_sort(void *base, size_t nitems, size_t size, compare_func cmp);

#endif