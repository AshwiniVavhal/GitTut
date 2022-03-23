#include<stdio.h>
int main(){
    int n1,n2,add;
     int *ptr1=&n1;
     int *ptr2=&n2;
     printf("\nEnter any two nos");
     add=n1 + n2;
     printf("\nAddition of %d and %d = %d",add, n1,n2);


return 0;
}