#include<stdio.h>
int main() {
    int array[5], i;
    for(i = 0; i < 5; i++) {
        printf("Enter Element %d: ", (i+1));
        scanf("%d", &array[i]);
    }
    int sum = 0;
    printf("Average of Elements = ");
    for(i = 0; i < 5; i++) {
        sum += array[i];
    }
    int average = sum/5;
    printf("%d", average);
    return 0;
}
