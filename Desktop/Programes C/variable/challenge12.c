#include <stdio.h>

int main() {
    int n, reversedNumber;
    
    printf("Entrez un nombre entier à trois chiffres : ");
    scanf("%d", &n);
    
    reversedNumber = (n % 10) * 100 + ((n / 10) % 10) * 10 + (n / 100);
    
    printf("Le nombre inverse est : %d\n", reversedNumber);
    
    return 0;
}
