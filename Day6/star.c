#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    // int size;
    // scanf("%d",&size);

    // int *Array1,*Array2,*Array3;  // int* Array 
    // Array1 = (int*)malloc(size * sizeof(int));
    // Array2 = (int*)malloc(size * sizeof(int));
    // Array3 = (int*)malloc(size * sizeof(int));
    // printf("\nENter values for Array 1 : ");
    // for(int i=0;i<size;i++)
    //     scanf("%d",&Array1[i]);
    
    // printf("\nENter values for Array 2 : ");
    // for(int i=0;i<size;i++)
    //     scanf("%d",&Array2[i]);

    // printf("\nENter values for Array 3 : ");
    // for(int i=0;i<size;i++)
    //     scanf("%d",&Array3[i]);
    // int rows,cols;
    // printf("\nEnter no. of rows and cols : ");
    // scanf("%d%d",&rows,&cols);

    // int Array[rows][cols];
    // printf("\nEnter the array values : ");
    // for(int i=0;i<rows;i++)
    // {
    //     for(int j=0;j<cols;j++)
    //         scanf("%d",&Array[i][j]);
    // }
    // printf("\n Values in the array are : \n");
    // for(int i=0;i<rows;i++)
    // {
    //     for(int j=0;j<cols;j++)
    //         printf("%d ",Array[i][j]);
    //     printf("\n");
    // }
//Add each individual rows and display the sum after every row
    // for(int i=0;i<rows;i++)
    // {
    //     int sum=0;
    //     for(int j=0;j<cols;j++)
    //     {
    //         sum=sum+Array[i][j];
    //     }
    //     printf("\nSum of row %d is : %d",i+1,sum);
    // }
 //   printf("\nSum of all values is : %d ",sum);
/*
1 2 3  = 6
4 5 6  = 15
7 8 9  = 24
*/
//     int size;
// printf("\nENter the size of the array : ");
//     scanf("%d",&size);
//     int *Array;
//     Array = calloc(size * sizeof(int));
// printf("\nEnter values : ");
//     for(int i=0;i<size;i++)
//         scanf("%d",&Array[i]);

// printf("\nArray values : ");
//     for(int i=0;i<size;i++)
//         printf("%d ",Array[i]);
// Array= realloc(Array,(size-2)*sizeof(int));
// printf("\nArray values after modify : ");
//     for(int i=0;i<size;i++)
//         printf("%d ",Array[i]);

//     int size;
// printf("\nENter the size of the array : ");
//     scanf("%d",&size);
//     int *Array;
//     Array = malloc(size * sizeof(int));
// printf("\nEnter values : ");
//     for(int i=0;i<size;i++)
//         scanf("%d",&Array[i]);
//     int size;
// printf("\nENter the size of the array : ");
//     scanf("%d",&size);
//     int *Array;
//     Array = malloc(size*sizeof(int));
// printf("\nEnter values : ");
//     for(int i=0;i<size;i++)
//         scanf("%d",&Array[i]);
// printf("\nArray values : ");
//     for(int i=0;i<size;i++)
//         printf("%d ",Array[i]);

// free(Array);

//     printf("\nArray values after FREE() : ");
//     for(int i=0;i<size;i++)
//         printf("%d ",Array[i]);

    // int Array[69]; //Integer type Array
    // float Array[60];// Float type Array
    // double Array[69];//Double type Array
   
    char Array[69]; //Character type Array = String
    gets(Array);   //take multi word input using gets
//    scanf("%s",&Array);// take single work input
 //   scanf("%[^\n]s",Array);
    /*in the line above, ^ (XOR) is going to be
    performed on every character that you
    read from input with \n and stops taking 
    input from scanf 
    */

  //  puts(Array); //display with puts
    printf("\nThe String is : %s ",Array); //display with %s inside printf() 
strrev(Array);
    printf("\nReverse string : %s",Array);






}