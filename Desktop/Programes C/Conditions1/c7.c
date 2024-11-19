#include<stdio.h>
int main(){
    int nbr;
    printf("donné un nomber : ");
    scanf("%d",&nbr);
    if (nbr<0)
    {
        printf("%d négatif",nbr);
    }
    else if(nbr>0){
        printf("%d positif",nbr);

    }else 
    {
        printf("%d le nombre est égal à zéro.",nbr);
        
    }
    
    

}