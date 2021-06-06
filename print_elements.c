#include<stdio.h>
int main() {
    int array[5], i;
    for(i = 0; i < 5; i++) {
        printf("Enter Element %d: ", (i+1));
        scanf("%d", &array[i]);
    }
    printf("Array Elements Are: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
