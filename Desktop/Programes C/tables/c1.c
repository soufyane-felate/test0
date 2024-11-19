#include <stdio.h>

void reverseArray(int array[], int n) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }
}

int main() {
    int array[5];
    
    printf("Entrez 5 numbers: ");
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &array[i]);
    }
    
    printf("Original array: ");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    int n = sizeof(array) / sizeof(array[0]);

    reverseArray(array, n);

    printf("Reversed array: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
