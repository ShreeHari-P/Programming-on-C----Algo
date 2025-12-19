#include <stdio.h>

int main()
{
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int rows1,cols1, rows2,cols2;
    printf("rows, cols of matrix1: ");
    scanf("%d %d",&rows1,&cols1);
    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < cols1; j++){
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("rows2, cols2 of matrix2: ");
    scanf("%d %d",&rows2,&cols2);
    for(int i = 0; i < rows2; i++){
        for(int j = 0; j < cols2; j++){
            scanf("%d",&matrix2[i][j]);
        }
    }

    if(cols1 == rows2){

        printf("Multiplication of two matrices: \n");
        for(int i = 0; i < rows1; i++){
            for(int j = 0; j < cols2; j++){
                result[i][j] = 0;
                for(int k = 0; k < cols1; k++){
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
                printf("%d ",result[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("Multiplication is not possible\n");
    }
}
