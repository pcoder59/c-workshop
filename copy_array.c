#include<stdio.h>
int main() {
    int array[5], copy_array[5], i;
    for(i = 0; i < 5; i++) {
        printf("Enter Element %d: ", (i+1));
        scanf("%d", &array[i]);
    }
    printf("Array Elements: ");
    for(i = 0; i < 5; i++) {
        copy_array[i] = array[i];
    }
    for(i = 0; i < 5; i++) {
        printf("%d ", copy_array[i]);
    }
    return 0;
}

