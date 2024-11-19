#include<stdio.h>
int main(){
    int n,i=0;
    printf("entrer un nombre : ");
    scanf("%d",&n);

    do
    {
       i=(i*10)+(n%10);
       n=n/10;
    } while (n!=0);
    printf("%d",i);
    
}