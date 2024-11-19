#include<stdio.h>
int main(){
    char v; 
    printf("entrer un voyelle : ");
    scanf("%c",&v);
    switch (v){
    case 'a':
    case 'e':
    case 'o':
    case 'i':
    case 'I':
    case 'E':
    case 'A':
    case 'O':
 
    printf("voyelle");
        
        break;
    
    default:
    printf("non voyelle");
        break;
    }
}