#include<stdio.h>
int main(){
    char l;
    printf("Entrer un lettre : ");
    scanf("%c",&l);
    if (l>='A' && l<='Z')
    {
        printf("La lettre %c majuscules",l);
    }
    else printf("La lettre %c minuscile",l);
      
    
}