#include <stdio.h>
#include <malloc.h>

#include "matrix.h"

int multiply_matrix(MATRIX *matrix1, MATRIX *matrix2, MATRIX *result_matrix) {
    result_matrix->lines = matrix1->lines;
    result_matrix->columns = matrix2->columns;
    result_matrix->matrix_data = (double *) calloc(result_matrix->lines * result_matrix->columns, sizeof(double));


    if (!result_matrix->matrix_data) {
        return -1;
    }

    for (size_t line_number = 0; line_number < result_matrix->lines; line_number++) {
        for (size_t column_number = 0; column_number < result_matrix->columns; column_number++) {
            for (size_t lc_coefficient = 0; lc_coefficient < matrix1->columns; lc_coefficient++) {

                result_matrix->matrix_data[line_number * result_matrix->columns + column_number] +=
                    matrix1->matrix_data[line_number * matrix2->lines + lc_coefficient] *
                        matrix2->matrix_data[lc_coefficient * result_matrix->columns + column_number];
            }
        }
    }

    return 0;
}

int fill_matrix(MATRIX *matrix) {
    if (!matrix->matrix_data) {
        printf("null pointer error\nfill_matrix function\n");
        return -1;
    }

    for (size_t line_number = 0; line_number < matrix->lines; line_number++) {
        for (size_t column_number = 0; column_number < matrix->columns; column_number++) {
            scanf("%lf", &matrix->matrix_data[line_number * matrix->columns + column_number]);
        }
    }

    return 0;
}

int print_matrix(MATRIX *matrix) {
    if (!matrix->matrix_data) {
        printf("null pointer error\nprint_matrix function\n");
        return -1;
    }

    for (size_t line_number = 0; line_number < matrix->lines; line_number++) {
        for (size_t column_number = 0; column_number < matrix->columns; column_number++) {
            printf("%10.2lf ", matrix->matrix_data[line_number * matrix->columns + column_number]);
        }
        printf("\n");
    }

    return 0;
}

int set_matrix(MATRIX *matrix) {
    int lines = 0, columns = 0;

    scanf("%d %d", &lines, &columns);

    matrix->lines   = lines;
    matrix->columns = columns;
    matrix->matrix_data = (double *) calloc(matrix->lines * matrix->columns, sizeof(double));

    return 0;
}
