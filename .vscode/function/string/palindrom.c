#include<stdio.h>
#include<stdlib.h>
int main(){
    char str[20];
    int i, j, temp=0;
    int x=1;
    printf("\nEnter any string");
    scanf("%s",&str);

    for(i=0;i<str[i]!='\0';i++);
    j=i-1;    
    for(i=0;i<j;j--)
    {
        if(str[i]!=str[j])
        {
            x=0;
            break;
        }
    }
    if(x)
    {
        printf("\nGiven string is palindrom");
    }
    else{
        printf("\nNot palindrom");
    }


return 0;
}