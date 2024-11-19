#include <stdio.h>

int main() {
    char Nom[100];  
    int Age = 21;
    char sexe[100];     
    char numero[100]; 
    
    printf("Entrer votre nom : ");
    scanf("%s", Nom);  

    printf("Entrer votre âge : ");
    scanf("%d", &Age);  

    printf("Entrer votre sexe : ");
    scanf("%s", sexe);  

    printf("Entrer votre numéro : ");
    scanf("%s", numero);  
    
    printf("Je m'appelle %s, j'ai %d ans, je suis %s, et mon numéro est %s.\n", Nom, Age,sexe,numero);
    
    return 0;
}
