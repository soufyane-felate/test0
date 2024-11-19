#include<stdio.h>
int main(){
   
    int j;
    int s,h,m,c,mi,ca,ny;
      printf("Entrez le type d’année si l’année bissextile Entrez 1 ou sinon Entrez 2 :  ");
    scanf("%d",&ca);
    printf("entrer le nomber de annee :  ");
    scanf("%d",&ny);
  
   if (ca==1)
   {
    m=12*ny;
    j=365*ny;
    h=8760*ny;
    mi=525600*ny;
    s=31536000*ny;
   printf("contient %d mois \n", m);
   printf("contient %d jours\n",j);
   printf("contient %d heures \n",h);
   printf("contient %d minutes \n",mi);
   printf("contient %d secondes \n",s);
    
    
   }else{
    m=12*ny;
    j=366*ny;
    h=8784*ny;
    mi=527040 *ny;
    s=31622400 *ny;
     printf("contient %d mois \n", m);
   printf("contient %d jours\n",j);
   printf("contient %d heures \n",h);
   printf("contient %d minutes \n",mi);
   printf("contient %d secondes \n",s);
   }
   
    
  
    
    

    
}