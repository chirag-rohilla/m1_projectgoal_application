/**
 * @file matrical.h
 * @author chirag (rohillachirag783@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "matrix.h"


int *create_matrix(int r , int c , struct matrix *m1);
int *Transpose(struct matrix m1 , struct matrix *solve);
int print_matrix(struct matrix im_mat);
int *matrix_sum (struct matrix m1 , struct matrix m2,struct matrix *solve);
int *matrix_differnce (struct matrix m1 , struct matrix m2,struct matrix *solve);
int *matrix_multi (struct matrix m1 , struct matrix m2,struct matrix *solve);
int det_of_matrix(struct matrix m1);