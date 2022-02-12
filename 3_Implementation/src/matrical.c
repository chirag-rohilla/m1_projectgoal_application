/**
 * @file matrical.c
 * @author chirag (rohillachirag783@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include"matrical.h"

int arr[100];
int *to_array(struct matrix m1 ){
    int *arr;
arr = (int*)malloc(m1.row*m1.col*sizeof(int));
int idx =0;
for(int i =0 ;i <m1.row ; i++){
    for (int j = 0; j < m1.col; j++)
    {
        arr[idx] = m1.mat[i][j];
        ++idx;
    }
    
}
return arr;

}

// creating a matrix

int *create_matrix(int r, int c , struct matrix *mat){
    //printf("calling create method");
    mat->row = r;
    mat->col = c ;
    for (int i =0 ; i <r ; i++){
        for(int j = 0; j <c; j++){
            scanf("%d",&mat->mat[i][j]);
        }

    }
    
    int *arr;

    arr = to_array(*mat);
    return arr ; 
}

// transpose of a matrix 
int *Transpose(struct matrix in_mat , struct matrix *out_mat){
    out_mat->row = in_mat.col;
    out_mat->col = in_mat.row;
    for (int i =0 ; i < out_mat->row; i++){
        for(int j =0 ; j < out_mat->col ;j++){
            out_mat->mat[i][j] = in_mat.mat[j][i];
        }
    } 
    int *arr;
    arr = to_array(*out_mat);
    return arr ;
}

// printing the matrix
int print_matrix(struct matrix in_matrix){
      for (int i =0 ; i <in_matrix.row ; i++){
        for(int j = 0; j <in_matrix.col; j++){
            printf("%d  ",in_matrix.mat[i][j]);
        }
        printf("\n");
    }
    return 0 ;
}

// sum of a matrix
int *matrix_sum( struct matrix m1 , struct matrix m2, struct matrix *result){
    result->row = 0 ;
    result->col = 0 ; 
    if(m1.row != m2.row || m1.col !=m2.col)return *result->mat; //  here i need to think a logic so that i can handle the exception.
    else 
    {
        result->row = m1.row;
        result->col = m2.col;    
        for (int i =0 ; i < m1.row ; i++){
            for(int j = 0; j < m1.col ; j++){
                result->mat[i][j] = m1.mat[i][j] + m2.mat[i][j];
        }
    }
    }
int *arr;

    arr = to_array(*result);
    return arr ;
}

// matrix difference
int *matrix_differnce( struct matrix m1 , struct matrix m2, struct matrix *result){
    
    result->row = 0 ;
    result->col = 0 ; 
    if(m1.row != m2.row || m1.col !=m2.col)return *result->mat; //  here i need to think a logic so that i can handle the exception.
    else 
    {
        result->row = m1.row;
        result->col = m2.col;    
        for (int i =0 ; i < m1.row ; i++){
            for(int j = 0; j < m1.col ; j++){
                result->mat[i][j] = m1.mat[i][j] - m2.mat[i][j];
        }
    }
    }
    int *arr ;
    arr = to_array(*result) ;
    return arr ;
}
// multiply the matrix
int *matrix_multi (struct matrix m1 , struct matrix m2 , struct matrix* result){

    result->row = m1.row;
    result->col = m2.col;


    for (int i = 0; i < result->row; i++){
        for(int j = 0 ; j < result->col ; j++){
            result->mat[i][j] =0 ; 
            for(int k =0 ; k < m2.row ; k++){
                result->mat[i][j] += m1.mat[i][k]*m2.mat[k][j];
            }
        }
    }
    int *arr ;
    arr = to_array(*result) ;
    return arr ;
}

//finding the det of the matrix
int det_of_matrix(struct matrix m1)
{
    
    if(m1.row== m1.col)
    {
        for(int i = 0; i < m1.row; i++)
        {
            for(int j = 0; j < m1.row; j++)
            { 
                int ratio= 0;
                if(j>i){
                    ratio = m1.mat[j][i]/m1.mat[i][i];
                    for(int k = 0; k < m1.row ; k++){
                        m1.mat[j][k] -= ratio * m1.mat[i][k];
                    }
                }
            }
        }
        int det = 1; //storage for determinant
        for(int i = 0; i < m1.row; i++)
            det *= m1.mat[i][i];
        return det; 
    }
    return 0 ;
}   