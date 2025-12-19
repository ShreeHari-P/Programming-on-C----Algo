#include <stdio.h>

int main()
{
    int matrix1[10][10], matrix2[10][10];
    int rows1,cols1;
    printf("rows, cols of matrix1: ");
    scanf("%d %d",&rows1,&cols1);
    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < cols1; j++){
            scanf("%d",&matrix1[i][j]);
        }
    }

    int rows2, cols2;
    printf("rows2, cols2 of matrix2: ");
    scanf("%d %d",&rows2,&cols2);
    for(int i = 0; i < rows2; i++){
        for(int j = 0; j < cols2; j++){
            scanf("%d",&matrix2[i][j]);
        }
    }

    if(rows1 == rows2 || cols1 == cols2){
        int result[10][10];
        printf("Addition of two matrices: \n");
        for(int i = 0; i < rows1; i++){
            for(int j = 0; j < cols1; j++){
                result[i][j] = matrix1[i][j] + matrix2[i][j];
                printf("%3d ",result[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("Addition is not possible\n");
    }

}
