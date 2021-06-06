#include<stdio.h>
int main() {
    int matrix1[3][3], sum = 0, i, j;
    printf("Enter Elements of Matrix 1: \n");
    for(i = 0;i < 3;i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    for(i = 0;i < 3;i++) {
        for(j = 0; j < 3; j++) {
            if(i == j) {
                sum += matrix1[i][j];
            }
        }
    }
    printf("Sum of Diagonals of Matrix: \n");
    printf("%d ", sum);
    return 0;
}
