#include <stdio.h>
int main(){
    float c,f;
    printf("Entrer F : ");
    scanf("%f",&f);
     c = (f-32)/1.8;
    printf("C = : %f \n",c);
   /**/ 
   if (c < 0) {
    printf("très froid,\n");
} else if (c >= 0 && c < 15) {
    printf("froid,\n");
} else if (c >= 15 && c < 30) {
    printf("chaud,\n");
} else {
    printf("très chaud,\n");
}

    

    
    
}