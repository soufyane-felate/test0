#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void show(){
    char arr[][3]={};
    char* w;

    for (int i = 0; i < 3; i++)
    {
        printf("Entrer les chaînes : ");
        scanf("%s",&arr[i]);
    }

    for (int i = 0; i < 3; i+1)
    {
        printf("%s ",arr[i]);
    }
    
}

bool searsh(){
    int found;
    char w;

    for (int i  = 0; i < 3; ++i)
    {
        if (strcmp(arr[i]==w))
        {
            found=i;
            break;
        }
    }

    if (found= -1)
    {
        return 0;
    }
    else return 1;
    
    

}



int main(){
    char arr[][3];
    show();

}