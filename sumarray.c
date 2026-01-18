#include <stdio.h>

int main() {
    int sum = 0;
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 10; i++) {
        sum = sum + arr[i];
    }

    printf("%i\n", sum);
    return 0;
}
