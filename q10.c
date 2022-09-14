// Write a program in C to Find the Frequency of Characters
#include<stdio.h>
int main()
{
    char str[10];
    char freq[10];
    char ch;

    int i,count;

    printf("  Enter String: ");
    fgets(str,10,stdin);

    printf("Enter a character to find its frequency: ");
    scanf("%c",&ch);

    for(i=0;str[i];i++)
    {
        if( ch==str[i] )
        {
            ++count;
        }

    }
    printf("Frequency of %c is %d",ch,count);
}