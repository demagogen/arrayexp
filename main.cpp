//TODO сложение матриц, треугольный массив, функции для адресации
#include <stdio.h>

#include "arraylib.h"

int main() {
    const int size_x = 3;
    const int size_y = 2;
    double array[size_x][size_y] = {};

    const int array_length = 5;
    double one_dim_array[array_length] = {};

    fill_out_two_dim_array(*array, size_x, size_y);
    print_two_dim_array(*array, size_x, size_y);

    //fill_out_one_dim_array(one_dim_array, array_length);
    //print_one_dim_array(one_dim_array, array_length);

    return 0;
}
