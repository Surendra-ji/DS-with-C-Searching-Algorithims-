#include<stdio.h>
int* bubbleSort(int a[], int size)
{
    int i, j, temp;
    for (i = 0; i < (size - 1); ++i)
    {
        for (j = 0; j <size - 1 - i; ++j )
        {
            if (a[j] > a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
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
    ptr=bubbleSort(&arr,size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",*(ptr+i));
    }
}
