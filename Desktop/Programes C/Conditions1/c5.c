#include<stdio.h>
#include<math.h>
int main(){
    int delta,a=2,b=6,c=2,x1,x2;
    
   const int i=sqrt(-1);
    int s=i*sqrt(-delta);

    delta=pow(b,2)-4*a*c;
    if (delta>0)
    {
        x1=(-b+sqrt(delta))/2*a;
        x2=(-b-sqrt(delta))/2*a;
        printf("Il y a deux solutions réelles distinctes : \n");
        printf("x1 : %d \n",x1);
        printf("x2 : %d \n",x2);
        
    }else if (delta==0)
    {
        x1=(-b/2*a);
        printf("Il y a une seule solution réelle : \n");
        printf("x1 : %d \n",x1);
    }else{
        x1=(-b+s)/2*a;
        x2=(-b-s)/2*a;

        printf("ok");
    }
    
    

}