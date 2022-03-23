
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
    char str1[20];
    char str2[20];
    printf("\nEnter the string ");
    gets(str1);
    printf("\nEnter the string ");
    gets(str2);
    printf("\nstring 1 = %s", str1);
    strcpy(str2,str1);
    printf("\nstring 2 = %s", str2);
    strcpy(str1,str2);
    getch();

return 0;
}