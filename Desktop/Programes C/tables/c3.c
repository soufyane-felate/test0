#include<stdio.h>

int main(){
    int n,arr[8];
    
    
       

          for (int i = 0; i < 8; ++i)
    {
                    printf("Entrer un nombre  %d :",i);

        scanf("%d",&arr[i]);
        
    }
    printf("Original array: ");

    for (int i = 0; i < 8; ++i)

    {

       printf("%d",arr[i]);
    
    }
        int found = -1;

    printf("enter number : ");
    scanf("%d",&n);
    for (int i = 0; i < 8; ++i)
    {
        if (arr[i]==n)
        {
           found=i;
           break;
        }
        
    }
    


  if (found != -1) {
        printf("\nYour number is at position: %d\n", found + 1);
    } else {
        printf("Not found!!\n");
    }

   
    
    return 0;
    
    
  
    
    

}