#include <stdio.h>

int main() {
    int sum = 0;
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("Array: {");
    for (int i = 0; i < 10; i++) {
        if(i == 0) {
            printf("%i,", arr[i]);
        } else if (i == 9) {
            printf(" %i}\n", arr[i]);
        } else {
            printf(" %i,", arr[i]);
        }
    }

    for (int i = 0; i < 10; i++) {
        sum = sum + arr[i];
    }
    printf("Sum: %i\n", sum);

    return 0;
}
