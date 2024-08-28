#include <stdio.h>
#include <assert.h>

#include "arraylib.h"

//одномерный массив ввод
int fill_out_one_dim_array(double array[], int array_length) {
    for (int array_counter = 0; array_counter < array_length; array_counter++) {
        printf("Enter %d value\n", array_counter + 1);
        scanf("%lf", &array[array_counter]);
    }
    printf("Array filled\n");

    return 0;
}

//одномерный массив вывод
int print_one_dim_array(double array[], int array_length) {
    for (int array_counter = 0; array_counter < array_length; array_counter++) {
        printf("Data[%d] = %6.2lf\n", array_counter, array[array_counter]);
    }
    printf("End of array");
    return 0;
}

//двумерный массив ввод
int fill_out_two_dim_array(double *array, const int size_x, const int size_y) {
    assert(array);
    assert(size_x);
    assert(size_y);

    for (int x_counter = 0; x_counter < size_x; x_counter++) {
        for (int y_counter = 0; y_counter < size_y; y_counter++) {
            printf("Enter array[%d][%d]\n", x_counter, y_counter);
            scanf("%lf", &array[x_counter * size_x + y_counter]);
        }
    }
    printf("Array filled\n");

    return 0;
}

//двумерный массив вывод
int print_two_dim_array(double *array, const int size_x, const int size_y) {
    assert(array);
    assert(size_x);
    assert(size_y);

    printf("Print array\n");
    for (int x_counter = 0; x_counter < size_x; x_counter++) {
        for (int y_counter = 0; y_counter < size_y; y_counter++) {
            printf("array[%d][%d] = %5.2lf\n", x_counter, y_counter, array[x_counter * size_x + y_counter]);
        }
    }
    printf("End of array\n");

    return 0;
}
