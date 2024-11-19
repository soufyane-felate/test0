#include <stdio.h>
int main(){
    int M,km;
    
    printf("Entrer M : ");
    scanf("%d",&M);
    km=M*1000;
    float Mile = km*1.609;
    printf("Mile = : %f",Mile);
    return 0;

}