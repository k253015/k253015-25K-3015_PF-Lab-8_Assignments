#include<stdio.h>

int main(){
    int mat1[2][2] = {{1,2}, {3,4}};
    int mat2[2][2] = {{5,6}, {7,8}};
    int result_mat[2][2];

    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            result_mat[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d\t",result_mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}