#include"stdio.h"
#include"matrix.h"
#include"matrical.h"
#include<conio.h>
#include<stdlib.h>

void main_menu (){
    printf("                        MATRIX CALCLUTOR                     \n");
    printf(" 1 : TRANSPOSE A MATRIX .                                    \n");
    printf(" 2 : ADDITION OF A MATRIX .                                  \n");
    printf(" 3 : SUBTRACTION OF A MATRIX .                               \n");
    printf(" 4 : MULTIPLICATION A MATRIX .                               \n");
    printf(" 5 : DET OF  A MATRIX .                                      \n");
    printf(" 6 : EXIT                                                    \n\n\n");
    printf(" ENTER YOUR CHOICE :");
}

int main(){
char c = 'y' ;
int r1,r2,c1,c2; 
struct matrix m1 ,m2 ,solve;
        
while(c == 'y' || c == 'Y'){
    main_menu();
    int choice ;
    
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 :
        system("clear || cls" );
        
        printf("Declare the matrix \n enter the number of rows   :  ");
        scanf("%d",&r1);
        printf("enter the number if coloumn :  ");
        scanf("%d",&c1);
        m1 = create_matrix(r1,c1);
        solve = Transpose(m1);
        printf("transposed matrix :  \n");
        print_matrix(solve);
        break;

        case 2 :
        system("clear || cls" );
        
        printf("Declare the matrix \n enter the number of rows   :  ");
        scanf("%d",&r1);
        printf("enter the number if coloumn :  ");
        scanf("%d",&c1);
        m1 = create_matrix(r1,c1);
        m2 = create_matrix(r1,c1);
        solve = matrix_sum(m1,m2);
        printf("solution matrix :  \n");
        print_matrix(solve);
        break;


        case 3 :
        system("clear || cls" );

        printf("Declare the matrix \n enter the number of rows   :  ");
        scanf("%d",&r1);
        printf("enter the number if coloumn :  ");
        scanf("%d",&c1);
        m1 = create_matrix(r1,c1);
        m2 = create_matrix(r1,c1);
        printf("solution matrix :  \n");
        solve = matrix_differnce(m1,m2);
        break ;

        case 4:
        system("clear || cls" );
        
        printf("Declare the matrix \n enter the number of rows for matrix1  :  ");
        scanf("%d",&r1);
        printf("enter the number if coloumn for matrix1 :  ");
        scanf("%d",&c1);
        printf("Declare the matrix \n enter the number of rows for matrix2  :  ");
        scanf("%d",&r2);
        printf("enter the number if coloumn for matrix2 :  ");
        scanf("%d",&c2);
        m1 = create_matrix(r1,c1);
        m2 = create_matrix(r2,c2);
        solve = matrix_multi(m1,m2);
        printf("solution matrix :  \n");
        print_matrix(solve);
        break;

        case 5 :
        system("clear || cls" );
        printf("service not avialable yet ");
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

