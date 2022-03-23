#include<stdio.h>
#include<string.h>
int main(){
    char str1[20];
    char str2[20];
    int value;
    printf("\n Enter the first string");
    scanf("%s",&str1);
    printf("\n Enter the second string");
    scanf("%s",&str2);
    value=strcmp(str1,str2);
    if(value==0)
    printf(" first string are greater");
    else
    printf(" second string are less");




return 0;
} 