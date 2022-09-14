// Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[15];
    char ch;
    int i,j,count=0;
    printf("Enter string: ");
    fgets(str,15,stdin);
    printf("%s",str);
    printf("Enter a character to find its occurence in a given string: ");
    ch=getchar();
    printf("\n");
    printf("You have passed");
    printf("\n");
    putchar(ch);
    for(i=0;str[i];i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
    }
printf("Its occurence is %d",count);

    return 0;
}