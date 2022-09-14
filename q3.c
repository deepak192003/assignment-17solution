// Write a program to count vowels in a given string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;
    char ch;
    int count=0;
    printf("Enter string: ");
    gets(str);
//for counting vowels in a given string
    for( i=0;str[i];i++)
    {
        ch=str[i];
        if(ch=='a'||ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E'|| ch=='I' ||  ch== 'O' || ch=='U')
        {
            count++;
        }
    }
    printf("%d",count);
}