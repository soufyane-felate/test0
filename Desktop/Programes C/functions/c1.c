#include<stdio.h>
#include<stdbool.h>




void add(int a ,int b){
        printf("-------------------------------------------------------------------------------\n");
        printf("%d , %d\n",a,b);
        printf("-------------------------------------------------------------------------------\n");
 
}
void echanger(int c , int d){
    int e;
   e=c;
   c=d;
   d=e;

  
    printf(" c = %d ,d=  %d\n",c,d);

        printf("-------------------------------------------------------------------------------\n");

}

bool isPremier(int n ){
    
   
      if (n<=1) return false;
      for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; 
        }
    }  
    return true;

}

bool divededby(int n,int a1){
    double res=n/a1;
    if (n / a1 !=0)
    {
        return isPremier(res);
    }else{
        return false;
    }
    
}


int main(){
   bool reso= divededby(12,2);
    printf("le res %s\n", reso ? "true" : "false"); 

  add(3,4);
  echanger(3,4);

  int n;
    printf("Entrez un nombre : ");
    scanf("%d", &n);  
    
    if (isPremier(n)) {
        printf("Le nombre est premier.\n");
    } else {
        printf("Le nombre n'est pas premier.\n");
    }
    
    return 0;


}