#ifndef MATRIX_H_
#define MATRIX_H_

#include <malloc.h>

struct MATRIX {
    int lines = 0;
    int columns = 0;
    double *matrix_data = NULL;
};

int set_matrix(MATRIX *matrix);
int fill_matrix(MATRIX *matrix);
int print_matrix(MATRIX *matrix);
int multiply_matrix(MATRIX *matrix1, MATRIX *matrix2, MATRIX *result_matrix);
#endif
