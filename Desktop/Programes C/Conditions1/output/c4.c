#include<stdio.h>
int main(){
    int x,y;
    printf("Entrer X : ");
    scanf("%d",&x);
    scanf("%d",&y);
    if (x!=y)
    {
        printf("res = %d",x+y);
    }
    else{
        int res=(x+y)*3;
        printf("res = %d",res);
    }
    
}