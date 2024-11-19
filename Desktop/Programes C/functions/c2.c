#include <stdio.h>
#include <stdbool.h>

void add(int a2 , int b2){
    printf("a : %d , b : %d ", a2,b2);
}
//----------------------------------------------"
void echanger(int e , int f){
    int d;
    d=e;
    e=f;
    f=d;
        printf("e : %d , f : %d ", e,f);

}


//----------------------------------------------"

bool isPremier(int n){

if (n<=1) return false;
{
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i==0) return false;
        
        
    }
    return true;
    
}
}
//----------------------------------------------"
bool dividedBy(int n1, int a)
{
   if (a==0) return false;

    if (n1 / a !=0)
   {
    return isPremier(n1/a);
   }
   return false;
   
   
   
 }

//----------------------------------------------"
 
int main(){

   int e,f;

    printf("entrez e : ");
    scanf("%d",&e);
    printf("entrez b : ");
    scanf("%d",&f);
    echanger(e,f);
    printf("\n----------------------------------------------\n");

    int a2,b2;
    printf("entrez a : ");
    scanf("%d",&a2);
    printf("entrez b : ");
    scanf("%d",&b2);
    add(a2,b2);
    printf("\n----------------------------------------------\n");

    int n,n1,a;
    printf("Entrez un nomber n : ");
    scanf("%d" ,&n);
    int res=isPremier(n);
    if (res)
    {
        printf("le nomber est premier");
    }
      else  printf("le nomber non premier");


  
    
       
printf("\n----------------------------------------------\n");
    printf("entrz n1 :  ");
    scanf(" %d ",&n1);
    printf("entrz a :  ");
    scanf(" %d ",&a);


    bool r = dividedBy(n1, a);
 if (r) {
        printf("Le résultat de %d / %d est premier.\n", n1, a);
    } else {
        printf("Le résultat de %d / %d n'est pas premier.\n", n1, a);
    }



  return 0;

}