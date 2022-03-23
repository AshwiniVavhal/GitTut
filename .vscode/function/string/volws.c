#include<stdio.h>
#include<stdlib.h>
int main(){
    char name[10];
    printf("\nEnter any name");
    scanf("%s",&name);
    int i,l=0;
    int vcnt=0,ccnt=0;
    printf("\nEnter any name");
    for(i=0;name[i]!='\0';i++)
    {
        if((name[i]=='a')||(name[i]=='e')||(name[i]=='i')||(name[i]=='o')||(name[i]=='u'))
        {
            vcnt++;
        }
        else{
            ccnt++;
        }
    }
    printf("\nTotal no of vowels  :%d",vcnt);    
    printf("\nTotal no of const  :%d",ccnt);


    for(i=0;name[i]!='\0';i++)
    {
        l++;
    }
    printf("\nLenght of your string is : %d",i);

return 0;
}