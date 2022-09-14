// Write a program in C to count the total number of alphabets, digits and special 
// characters in a string.
#include<stdio.h>
int main()
{
    char str[15];
    int i,count_character=0;
    int count_digit=0;
    int countspecial_character=0;
    //as according to question take example like that
    printf("Create new password with dgits alphabets and special character: ");
    fgets(str,15,stdin);

    //to count the digits alphabets and special characters in string
  
  for(i=0;str[i];i++)
  {
    if(   (str[i]>='a'  && str[i]<='z') || (str[i]>='A'&& str[i]<='Z' ) )
    {
        count_character++;
    }
  }
  printf("Here total number of characters is %d\n\n",count_character);

for(  i=0;str[i];i++ )
{
    if(str[i]>='0'&& str[i]<='9')
    {
        count_digit++;
    }
}
printf("Here total number of digits is %d\n\n",count_digit);
for(  i=0;str[i];i++ )
{
    if(str[i]=='!' || str[i]=='@' || str[i]=='#' || str[i]=='$'|| str[i]=='%'||str[i]=='^'||str[i]=='&'||str[i]=='*'||str[i]=='('||str[i]==')'||str[i]=='-'||str[i]=='_'||str[i]=='+'||str[i]=='='||str[i]=='{'||str[i]=='}'||str[i]=='['||str[i]==']'||str[i]=='|'||str[i]==';'||str[i]==':')
    {
        countspecial_character++;
    }
}
printf("Here total number of special character is %d\n",countspecial_character);

}