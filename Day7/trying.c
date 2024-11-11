#include<stdio.h>
#include<string.h>
void main()
{
    char str[100],pal[100]="";
    gets(str);
    strcpy(pal,str);   
    printf("\n%s ",pal);
    strrev(str);
    if(strcmp(str,pal)==0)
        printf("\nThe string input is a Palindrome");
    else    
        printf("\nIt is not a Palindrome");
    printf("\nPal : %s \nStr : %s",pal,str);
/*

sitraj
It is not a Palindrome
Pal : sitraj
Str : jartis


madam
The string input is a Palindrome
Pal : madam
Str : madam
*/

}