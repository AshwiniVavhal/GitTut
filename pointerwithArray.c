#include<stdio.h>
int main(){
    int i;
    int arr[5]={10, 20, 30, 40, 50};
    int *ptr=&arr[0];
    printf("\n%d",*ptr);    
    printf("\n%d",*(ptr+1));   
    printf("\n%d",*(ptr+2));    
    printf("\n%d",*(ptr+3));    
    printf("\n%d",*(ptr+4));

    printf("\n-------using for loop--------");

    for(i=0;i<5;i++)
    {
        printf("\n%u ---> %d",ptr+i,*(ptr+i));
    }




return 0;
}   
