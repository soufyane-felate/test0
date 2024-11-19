#include <stdio.h>
int main(){
    int a,b,sum,mul,mod,div;
    printf("Entrer a: ");
    scanf("%d",&a);
    printf("Entrer b: ");
    scanf("%d",&b);
    sum=a+b;
    mul=a*b;
    mod=a%b;
    div=a-b;
    printf("a+b = %d \n",sum);
    printf("a*b = %d \n",mul);
    printf("a%%b = %d \n",mod);
    printf("a-b = %d \n",div);

}