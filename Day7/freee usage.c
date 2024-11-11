#include<stdio.h>
#include<stdlib.h>
void main()
{
    int size;
printf("\nENter the size of the array : ");
    scanf("%d",&size);
    int *Array;
    Array = malloc(size*sizeof(int));
printf("\nEnter values : ");
    for(int i=0;i<size;i++)
        scanf("%d",&Array[i]);
printf("\nArray values : ");
    for(int i=0;i<size;i++)
        printf("%d ",Array[i]);

free(Array);
Array=NULL;
    printf("\nArray values after FREE() : ");
    for(int i=0;i<size;i++)
        printf("%d ",Array[i]);
}