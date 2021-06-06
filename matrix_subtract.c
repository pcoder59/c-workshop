#include<stdio.h>
int main() {
    int matrix1[3][3], matrix2[3][3], summatrix[3][3], i, j;
    printf("Enter Elements of Matrix 1: \n");
    for(i = 0;i < 3;i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter Elements of Matrix 2: \n");
    for(i = 0;i < 3;i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for(i = 0;i < 3;i++) {
        for(j = 0; j < 3; j++) {
            summatrix[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    printf("Sum of the Two Matrix: \n");
    for(i = 0;i < 3;i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", summatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
