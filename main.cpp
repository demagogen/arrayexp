//TODO сложение матриц, треугольный массив, функции для адресации
#include <stdio.h>

#include "arraylib.h"
#include "matrix.h"

int main() {
    MATRIX matrix1;
    MATRIX matrix2;
    MATRIX result_matrix;

    printf("Enter first matrix's quantities of lines and columns\n");
    set_matrix(&matrix1);

    printf("Enter values of first matrix\n");
    fill_matrix(&matrix1);

    printf("Enter second matrix's quantities of lines and columns\n");
    set_matrix(&matrix2);

    printf("Enter values of second matrix\n");
    fill_matrix(&matrix2);

    print_matrix(&matrix1);
    printf("\n\n");

    print_matrix(&matrix2);
    printf("\n\n");

    multiply_matrix(&matrix1, &matrix2, &result_matrix);

    print_matrix(&result_matrix);

    return 0;
}


// matrix1;
    // matrix2;
    // result_matrix;//
    //("Enter first matrix's quantities of lines and columns\n");
    //(&matrix1);//
    //("Enter values of first matrix\n");
    //(&matrix1);//
    //("Enter second matrix's quantities of lines and columns\n");
    //(&matrix2);//
    //("Enter values of second matrix\n");
    //(&matrix2);//
    //(&matrix1);
    //("\n\n");//
    //(&matrix2);
    //("\n\n");//
    //(&matrix1, &matrix2, &result_matrix);//
    //(&result_matrix);
/******************TESTS******************/

    //const int size_x = 2;
    //const int size_y = 3;
    //double array[size_x][size_y] = {};

    //const int array_length = 5;
    //double one_dim_array[array_length] = {};

    //fill_out_two_dim_array(&array[0][0], size_x, size_y);
    //print_two_dim_array(&array[0][0], size_x, size_y);

    //fill_out_one_dim_array(one_dim_array, array_length);
    //print_one_dim_array(one_dim_array, array_length);
