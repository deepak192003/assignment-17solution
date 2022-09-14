// Write a program in C to copy one string to another string.
#include<stdio.h>
int main()
{
    char strA[10],strB[10];
    int i,j;
    printf("Enter string: ");
    fgets(strA,10,stdin);

    //to copy one string to another string

    for(i=0;strA[i];i++)
    {
      
        strB[i]=strA[i];
    }
 strB[i]='\0';
        printf("%s",strB);
    
}