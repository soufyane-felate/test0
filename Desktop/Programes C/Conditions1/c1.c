#include<stdio.h>
int main(){

int nbr;
printf("Entrer un nomber : ");
scanf("%d",&nbr);
if (nbr>=0 && nbr<=20)
{
    if (nbr>=10)
    {
        printf("valid");
    }
    else{
                printf("invalid");

    }
    
}else{
    printf(" demande un nombre entre 0 et 20 ");
}

}
