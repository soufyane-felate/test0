#include<stdio.h>

int main() {
    int n, arr[8];
    
    for (int i = 0; i < 8; ++i) {
        printf("Enter a number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("Original array: ");
    for (int i = 0; i < 8; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Enter number to search: ");
    scanf("%d", &n);
    
    int found = -1;
    for (int i = 0; i < 8; ++i) {
        if (arr[i] == n) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        printf("Your number is at position: %d\n", found + 1);
    } else {
        printf("Not found!!\n");
    }

    return 0;
}
