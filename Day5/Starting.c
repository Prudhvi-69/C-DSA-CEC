#include<stdio.h>
#include<stdlib.h>
void main()
{
//     int array[6];
//     for(int i=0;i<6;i++)
//         scanf("%d",&array[i]);
//     printf("\n");
//     for(int i=0;i<10;i++)
//         printf("%d ",array[i]);
// 
//10 20 2 36 69 106 6 6 4194432 6422288
    // // printf("%d ",sizeof(double));
    // int size;
    // scanf("%d",&size);
    // int *Array;
    // Array = malloc( size *sizeof(int));
    //Allocating the size of the array dynamically
    //inorder to use the dynamic memory allocated functions
    //you need to include <stdlib.h> header file
    //printf("\n %d \n",Array);    
//Array input with the help of pointer
    // for(int i=0;i<size;i++)
    //    scanf("%d",(Array+i));//1000,1000+4=1004
//Accessing the elements of the array with the help of 
//pointers by not using index value


    // printf("\n");
    // for(int i=0;i<size;i++)
    // //     printf("%d ",*(Array+i));
    // for(int i=0;i<size;i++)//taking input into the array
    //    scanf("%d",(Array+i));
    // // printf("\n");
    // int sum=0;
    // for(int i=0;i<size;i++)
    //      sum=sum+Array[i];//adding all the values
    // printf("\nSum is : %d",sum);//displaying the sum
    //ODD Index Sum for 2nd row 
//27 38 2 47 33 56 10 7 6 = 148  
    // int OIsum=0;
    // for(int i=1;i<size;i+=2)
    // {
    //     OIsum=OIsum+Array[i];    
    // }
    // printf("\nODD Index Sum : %d ",OIsum);
//Odd Positioned Sum for Row 3    
    // int OPsum=0;
    // for(int i=0;i<size;i+=2)
    // {
    //     OPsum=OPsum+Array[i];    
    // }
    // printf("\nODD Position Sum : %d ",OPsum);

    // int EIsum=0;
    // for(int i=0;i<size;i+=2)
    // {
    //     EIsum=EIsum+Array[i];    
    // }
    // printf("\nODD Position Sum : %d ",EIsum);

//
    // int EPsum=0;
    // for(int i=1;i<size;i+=2)
    // {
    //     EPsum=EPsum+Array[i];   

//     // }
//     // printf("\nODD Position Sum : %d ",EPsum);
// //45 12 47 85 223 68 69 45 106
//     // for(int i=0;i<size;i++)
//     // {
//     //     if(Array[i]%2!=1)
//     //         printf("%d ",Array[i]);
//     // }
// //45 12 23 455 78 69 20 106
// //45 12 23 455 78 20 106
// int remove_value,count=0;
// scanf("%d",&remove_value);
// for(int i=0;i<size;i++){
// 	if( Array[i] == remove_value) {
//         count++;
// 		for(int j=i;j<size-1;j++)
//             Array[j]=Array[j+1];	
//         i--;
// 	}
// //10 10 20 69 52 43 42 12454215	
// }
// printf("Array Values : \n");
//     for(int i=0;i<size-count;printf("%d ",Array[i++]));

/*5
41 42 69 58 99 
42
Array Values :
41 69 69 58
*/
int arr[] = {4, 5, 6};
int *const ptr = arr;
ptr[1] = 10;
printf("%d", arr[1]);
    


}
//47 1008 172 100 111 57 68 88 101 31 1 24 69 18 5 28
// 27 40 88 106 10 27 420

//OUTPUT : 47 111 57 101 31 1 69 5 27 27     
// for(int i=0;i<size;i++)
// printf("%d ",*(Array+i));


//