#include<stdio.h>
#include<stdlib.h>
 int display(int *ptr)
{
    int i, sum=0;
    for(i=0;i<5;i++)
    {
        printf("\n%d",*(ptr+i));
        sum=sum+ *(ptr+i);
    }
    return sum;
}
int main()
{ 
    int arr[5]={10, 20, 30, 40, 50};
    int sum = display(&arr[0]);
    printf("\nSum is : %d",sum);
    

return 0;
}