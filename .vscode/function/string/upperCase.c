#include<stdio.h>
#include<string.h>
int main(){
    char Str1[20];
    int i;
    printf("\n Enter a string that you want to convert into uppercase");    
    gets(Str1);


    for(i=0;Str1[i]!='\0';i++)
    {
        if(Str1[i]>='a'&& Str1[i]<='z')
        {
            Str1[i]=Str1[i] - 32;
        }
    }
    printf("\n The given string in upper case = %s", Str1);
    

return 0;
}