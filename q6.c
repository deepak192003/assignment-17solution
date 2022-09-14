// Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char inputstring[30];
    char outputstring[30];
    int i,j=0;
    printf("Enter string: ");
    fgets(inputstring,30,stdin);
   
   int length;
   length=strlen(inputstring);
   for(i= (length-1);i>=0;i--)
   {
    outputstring[j]=inputstring[i];
    j++;
   }
   printf("%s",outputstring);

}