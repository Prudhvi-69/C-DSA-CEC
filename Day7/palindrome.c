#include<stdio.h>
#include<string.h>
void main()
{
    // char str[100],pal[100]="";
    // gets(str);
    // strcpy(pal,str);   
    // printf("\n%s ",pal);
    // strrev(str);
    // if(strcmp(str,pal)==0)
    //     printf("\nThe string input is a Palindrome");
    // else    
    //     printf("\nIt is not a Palindrome");
char str[100],pal[100]="";
gets(str);
int len=0;
for(int i=0;str[i]!='\0';i++)//finding the length of string
    len++;                   //without using strlen() function
printf("\nLength of the String is : %d",len);
int left=0;
int right=len-1;
    for(int i=0;i<len;i++)
        pal[i]=str[i];     //copying str into pal
while(left<right)
{
    char temp=str[left];        //reversing the string str
    str[left]=str[right];   //using left and right 
    str[right]=temp;
    left++;
    right--;
}

   printf("\nPal : %s \nStr : %s",pal,str);
int check=1;
for(int i=0;i<len;i++)
{
    if(str[i]!=pal[i])//checking if both strings are equal or not
    {
        check=0;// it will break the loop if they are not equal
        break;
    }
}
if(check)   //check will be 1, if it is palindrome, 0 if not
    printf("\nIt is a Palindrome");
else    
    printf("\nIt is not a Palindrome");


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