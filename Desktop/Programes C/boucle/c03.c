#include<stdio.h>
int main(){
    int n,s=0,m=-1,count=0,f=0;
 
    while (count<3)
    {
    printf("Entrer un nomber : ");
    scanf("%d",&n);
        if (n==0)
        {
            break;
        }
        if (n>100)
        {
            continue;
        }
        if (n%10==0)
        {
            if (!f)
            {
               m=n;
               f=1;
            }
            s+=n;
            if (n>m);
            {
                n=m;
            }
            
            
        }
        
        
    count++;
    }
    if (f) {
        printf("Somme des éléments valides: %d\n", s);
        printf("Maximum des éléments valides: %d\n", m);
    } else {
        printf("Aucun nombre valide n'a été entré.\n");
    }

    return 0;
    

}
