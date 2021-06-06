#include<stdio.h>
int main() {
    int matrix[3][3], i, j;
    printf("Enter Elements of Matrix: \n");
    for(i = 0;i < 3;i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix Is: \n");
    for(i = 0;i < 3;i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
