#include<stdio.h>

int main(){
    int array[2][2];

    for (int i=0;i<2;i++){
        printf("For Row %d: \n",i+1);
        for (int j=0;j<2;j++){
            printf("Enter Number %d: ",j+1);
            scanf("%d",&array[i][j]);
        }
        printf("\n");
    }

    printf("Matrix: \n");

    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of Matrix: \n");

    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            printf("%d\t",array[j][i]);
        }
        printf("\n");
    }

    return 0;
}