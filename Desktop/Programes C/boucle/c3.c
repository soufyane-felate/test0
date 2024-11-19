#include <stdio.h>

int main() {
    int number, sum = 0, max = -1; 
    int first_valid = 0;
    int count=0; 
    
    printf("Entrez une série d'entiers positifs inférieurs à 100, terminée par 0.\n");

    while (count<3) {
        printf("Entrez un nombre: ");
        scanf("%d", &number);

        if (number == 0) {
            break;
        }

        if (number > 100) {
            continue;
        }
        if (number%10==0)
        {
           if (!first_valid) {
            max = number;
            first_valid = 1;
        }

        sum += number;

        if (number > max) {
            max = number;
        }
        }
        
count++;
        
    }

    if (first_valid) {
        printf("Somme des éléments valides: %d\n", sum);
        printf("Maximum des éléments valides: %d\n", max);
    } else {
        printf("Aucun nombre valide n'a été entré.\n");
    }

    return 0;
}
