#include<stdio.h>
#include<stdlib.h>
void swap(int *a ,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("\nValue of a is : %d",*a);   
    printf("\nValue of b is : %d",*b);

}
int main(){
    int n1, n2;
    n1=10;
    n2=20;
    printf("\nValue of n1 is : %d", n1);    
    printf("\nVlue of n2 is : %d", n2);
    swap(&n1,&n2);    
    printf("\nValue of n1 after swap function : %d", n1);   
    printf("\nValue of n2 after swap function : %d", n2);
    return 0;


}
















