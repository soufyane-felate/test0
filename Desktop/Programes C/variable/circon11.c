#include<stdio.h>
int main(){
    int largueur,longeur,res;
    printf("Entrer le longueur : ");
    scanf("%d",&largueur);
    printf("Entrer le largeur : ");
    scanf("%d",&largueur);
    res=2*(longeur + largueur);
    printf("la circonférence d'un rectangle :%d",res);
}