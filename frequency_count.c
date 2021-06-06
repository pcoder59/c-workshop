#include<stdio.h>
int main() {
    int array[5], copy_array[5], i, j, counter;
    for(i = 0; i < 5; i++) {
        printf("Enter Element %d: ", (i+1));
        scanf("%d", &array[i]);
        copy_array[i] = -1;
    }
    for(i = 0; i < 5; i++) {
        counter = 1;
        for(j = i + 1; j < 5; j++) {
            if(array[i] == array[j]) {
                counter++;
                copy_array[j] = 0;
            }
        }
        if(copy_array[i] != 0) {
            copy_array[i] = counter;
        }
    }
    printf("Frequency of Elements in Array:\n");
    for(i = 0; i < 5; i++) {
        if(copy_array[i] != 0) {
            printf("%d occurs %d times in array\n", array[i], copy_array[i]);
        }
    }
    return 0;
}


