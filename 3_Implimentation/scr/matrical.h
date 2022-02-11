#include "matrix.h"


struct matrix creat_matrix(int r , int c);
struct matrix Transpose(struct matrix m1);
int print_matrix(struct matrix im_mat);
struct matrix matrix_sum (struct matrix m1 , struct matrix m2);
struct matrix matrix_differnce (struct matrix m1 , struct matrix m2);
struct matrix matrix_multi (struct matrix m1 , struct matrix m2);
int det_of_matrix(struct matrix m1);