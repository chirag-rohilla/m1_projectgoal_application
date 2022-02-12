#include"stdio.h"
#include"matrix.h"
#include"matrical.h"
#include<stdlib.h>

int r1,r2,c1,c2; 
struct matrix m1 ,m2 ,solve;

void main_menu (){
    system("clear||cls");
    printf("                        MATRIX CALCLUTOR                     \n");
    printf(" 1 : TRANSPOSE A MATRIX .                                    \n");
    printf(" 2 : ADDITION OF A MATRIX .                                  \n");
    printf(" 3 : SUBTRACTION OF A MATRIX .                               \n");
    printf(" 4 : MULTIPLICATION A MATRIX .                               \n");
    printf(" 5 : DET OF  A MATRIX .                                      \n");
    printf(" 6 : EXIT                                                    \n\n\n");
    printf(" ENTER YOUR CHOICE :");
}
void do_sum (){
   system("clear || cls" );
        
        printf("Declare the matrix \n enter the number of rows   :  ");
        scanf("%d",&r1);
        printf("enter the number if coloumn :  ");
        scanf("%d",&c1);
        create_matrix(r1,c1,&m1);
        create_matrix(r1,c1,&m2);
        printf("solution matrix :  \n");
        print_matrix(solve);
}
void do_diff(){
     system("clear || cls" );

        printf("Declare the matrix \n enter the number of rows   :  ");
        scanf("%d",&r1);
        printf("enter the number if coloumn :  ");
        scanf("%d",&c1);
        create_matrix(r1,c1,&m1);
        create_matrix(r1,c1,&m2);
        printf("solution matrix :  \n");
        matrix_differnce(m1,m2,&solve);
        print_matrix(solve);
}
void do_multiply(){
      system("clear || cls" );
        
        printf("Declare the matrix \n enter the number of rows for matrix1  :  ");
        scanf("%d",&r1);
        printf("enter the number if coloumn for matrix1 :  ");
        scanf("%d",&c1);
        create_matrix(r1,c1,&m1);
        printf("Declare the matrix2 \n enter the number of rows for matrix2  :  ");
        scanf("%d",&r2);
        printf("enter the number if coloumn for matrix2 :  ");
        scanf("%d",&c2);
       
        create_matrix(r2,c2,&m2);
        matrix_multi(m1,m2,&solve);
        printf("solution matrix :  \n");
        print_matrix(solve);
}
void do_det(){
    system("clear || cls" );
        printf("service not avialable yet ");
}
void do_transpose(){
      system("clear || cls" );
        
        printf("Declare the matrix \n enter the number of rows   :  ");
        scanf("%d",&r1);
        printf("enter the number if coloumn :  ");
        scanf("%d",&c1);
        create_matrix(r1,c1 ,&m1);
        Transpose(m1,&solve);
        printf("transposed matrix :  \n");
        print_matrix(solve);
}

int main(){
char c = 'y' ;        
while(c == 'y' || c == 'Y'){
    main_menu();
    int choice ;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 :
        do_transpose();
        break;
        case 2 :
        do_sum();
        break;
        case 3 :
        do_diff();
        break ;
        case 4:
        do_multiply();
        break;
        case 5 :
        do_det();
        break;
        case 6:
        exit(0);
        default :
        printf(" INVALID INPUT !!!");
        break;
    };  
printf("RETURN TO THE MAIN MENU (Y/N)    ");
scanf("%s",&c); 
}                                  
    return 0 ;
}

