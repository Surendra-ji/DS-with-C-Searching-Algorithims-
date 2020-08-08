#include<stdio.h>
int* insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
      while (j >= 0 && arr[j] > key)
       {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return arr;
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
     ptr=insertionSort(&arr,size);
     for(int i=0;i<size;i++)
     {
         printf("%d ",*(ptr+i));
     }


}

