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


struct matrix create_matrix(int r , int c);
struct matrix Transpose(struct matrix m1);
int print_matrix(struct matrix im_mat);
struct matrix matrix_sum (struct matrix m1 , struct matrix m2);
struct matrix matrix_differnce (struct matrix m1 , struct matrix m2);
struct matrix matrix_multi (struct matrix m1 , struct matrix m2);
int det_of_matrix(struct matrix m1);