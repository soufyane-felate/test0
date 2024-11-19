#include <stdio.h>
double calcul(int arr[],int n){

    if (n==0)
    {
        return 0;
    }else{
        return arr[0]+calcul(arr+1,n-1);
        
    }
    
 
    
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    double res=calcul(arr, n);
    printf("la somme : %lf \n",res);
    double m=res/10;
    printf("la moyenne %.2lf ",m);

}