#include<stdio.h>
#include<stdlib.h>
int main(){
    char name[10];
    printf("\nEnter any name");
    scanf("%s",&name);
    int i,l=0;
    for(i=0;name[i]!='\0';i++)
    {
        l++;
    }
    printf("\nLenght of your string is : %d",l);
    for(i=l-1;i>=0;i--)
    {
        printf("%c",name[i]);
    }

return 0;
}