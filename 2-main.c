#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    printf("Original array:\n");
    print_array(array, n);
    printf("\n");

    printf("Array after Selection Sort:\n");
    selection_sort(array, n);
    printf("\n");

    printf("Sorted array:\n");
    print_array(array, n);

    return (0);
}

