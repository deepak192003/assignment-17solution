// Write a program to convert a given string into uppercase

#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter string");
    fgets(str,20,stdin);
    int i;
   
    for(i=0;str[i];i++)
    {
        if(str[i]>='a'&& str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        
    }
    printf("%s",str);
}