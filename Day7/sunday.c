#include<stdio.h>
#include<string.h>
// void main()
// {
    // char str1[100],str2[100];
    // gets(str1);
    // gets(str2);
    // printf("String 1 : %s \nString 2: %s",str1,str2);
// int x=strcmp(str1,str2);
//     printf("\nResult : %d",x);
//     strcat(str2,str1);
//     printf("\nAfter changes in Strings : ");
//     printf("\nString1 : %s \nString2 : %s",str1,str2);
// 
/*
shivam
suprit
String 1 : shivam
String 2: suprit
After changes in Strings :
String1 : shivam
String2 : supritshivam*/
    // strrev(str1);
    // printf("\nString1 = %s",str1);
    // int length;
    // length= strlen(str1);
    // // printf("\nLength of String1 is : %d",length);
    // strupr(str1);
    // strlwr(str2);
    // printf("\nStringUpper1 : %s",str1);
    // printf("\nStringLower2 : %s",str2);


struct Student{
    int ID;
    float CGPA;
    char gender;
    char name[100];
};
void main()
{
    struct Student Sitraj={47,6.5,'m',"sid"};
    struct Student Vineeth;
    struct Student Civil[2];
//Structure variable as an Array to have multiple structure variables
    Civil[0].ID=2;
    Civil[0].CGPA=7.8;
    Civil[0].gender='f';

    strcpy(Civil[0].name,"Lavanya");
    
    Civil[1].ID=54;
    Civil[1].CGPA=8.9;
    Civil[1].gender='f';

    strcpy(Civil[1].name,"Chaitra");
    //struct Student *Ganavi;
   //Ganavi->name="Ganavi";
    scanf("%s",&Vineeth.name);
    scanf("%d",&Vineeth.ID);
    scanf("%f",&Vineeth.CGPA);
    Vineeth.gender='m';
//    scanf("%c",&Vineeth.gender);
/*
    Ganavi->ID=13;
    Ganavi->CGPA=8.9;
    Ganavi->gender='f';
    strcpy(Ganavi->name,"Ganavi");  */
        // Ganavi->name={'G','a','n','a','v','i'};
printf("\nSitraj data : ");
printf("\nName : %s\nGender: %c\nCGPA: %f\nID:%d",\
    Sitraj.name,Sitraj.gender,Sitraj.CGPA,Sitraj.ID);
    
printf("\nVineeth data : ");
printf("\nName : %s\nGender: %c\nCGPA: %f\nID:%d",\
    Vineeth.name,Vineeth.gender,Vineeth.CGPA,Vineeth.ID);

/*
printf("\nGanavi data : ");
printf("\nName:%s \nGender: %c\nCGPA: %f\nID:%d",\
    Ganavi->name,Ganavi->gender,Ganavi->CGPA,Ganavi->ID);
*/
printf("\nLavanya data : ");
printf("\nName:%s \nGender: %c\nCGPA: %f\nID:%d",\
    Civil[0].name,Civil[0].gender,Civil[0].CGPA,Civil[0].ID);


printf("\nChaitra data : ");
printf("\nName:%s \nGender: %c\nCGPA: %f\nID:%d",\
    Civil[1].name,Civil[1].gender,Civil[1].CGPA,Civil[1].ID);

//Assigning the entire contents of one structure variable to another 
struct Student Bhimu;
Bhimu=Sitraj;


strcpy(Bhimu.name,"Deadly Bhimu");
Bhimu.CGPA=9.9;
Bhimu.ID=33;
printf("\nBhimu data : ");
printf("\nName : %s\nGender: %c\nCGPA: %f\nID:%d",\
    Bhimu.name,Bhimu.gender,Bhimu.CGPA,Bhimu.ID);


struct Student *Ganavi;
Ganavi=&Vineeth;

printf("\nGanavi data : ");
strcpy(Ganavi->name,"Ganavi");
Ganavi->gender='f';
Ganavi->ID=13;
Ganavi->CGPA=8.9;
printf("\nName : %s\nGender: %c\nCGPA: %f\nID:%d",\
    Ganavi->name,Ganavi->gender,Ganavi->CGPA,Ganavi->ID);
strcat()

}
/*
Vineeth
57
8.69

Sitraj data :
Name : sid
Gender: m
CGPA: 6.500000
ID:47
Vineeth data :
Name : Vineeth
Gender: m
CGPA: 8.690000
ID:57*/







