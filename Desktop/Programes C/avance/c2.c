#include <stdio.h>

int main() {
    char o, c = 'o'; 
    int n1, n2, res;

    while (c == 'o') {
        printf("Entrez le premier nombre : ");
        scanf("%d", &n1);

        printf("Entrez l'opérateur (+, -, *, /) : ");
        scanf(" %c", &o);  

        printf("Entrez le deuxième nombre : ");
        scanf("%d", &n2);

        if (o == '/' && n2 == 0) {
            printf("Erreur : Division par zéro impossible.\n");
        } else {
            switch (o) {
                case '+':
                    res = n1 + n2;
                    printf("Résultat : %d\n", res);
                    break;
                case '-':
                    res = n1 - n2;
                    printf("Résultat : %d\n", res);
                    break;
                case '*':
                    res = n1 * n2;
                    printf("Résultat : %d\n", res);
                    break;
                case '/':
                    res = n1 / n2;
                    printf("Résultat : %d\n", res);
                    break;
                default:
                    printf("Erreur : Opérateur invalide.\n");
                    break;
            }
        }

        printf("Voulez-vous continuer (o pour oui, n pour non) ? ");
        scanf(" %c", &c);  
    }

    printf("Fin du programme.\n");
    return 0;
}
