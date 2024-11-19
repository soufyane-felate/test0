#include <stdio.h>
#include <math.h>

int premier(int n) {
    if (n <= 1) {
        return 0;  
    }
    
    if (n==2||n==3) {
        return 1; 
    }

    if (n % 2 == 0 || n % 3 == 0) {
        return 0;  
    }

    int l = sqrt(n);
    for (int i = 5; i <= l; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;  
        }
    }

    return 1; 
}
int main() {
    int n;
    printf("Entrez un nombre : ");
    scanf("%d", &n);  
    
    if (premier(n)) {
        printf("Le nombre est premier.\n");
    } else {
        printf("Le nombre n'est pas premier.\n");
    }
    
    return 0;
}
