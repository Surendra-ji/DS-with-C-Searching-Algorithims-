#include<stdio.h>
int* selectionSort(int a[], int size)
{
    int i, j, min,temp;
    for (i = 0; i < size-1; i++)
    {
        min = i;
        for (j = i+1; j <size; j++)
       {
        if (a[j] < a[min])
            min = j;
             temp=a[min];
            a[min]=a[i];
            a[i]=temp;

        }
    }
    return a;
}
void main()
{
     int size,*ptr;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Input the array elements.\n");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
     printf("Sorted array is..\n");
     ptr=selectionSort(&arr,size);
     for(int i=0;i<size;i++)
     {
         printf("%d ",*(ptr+i));
     }


}
