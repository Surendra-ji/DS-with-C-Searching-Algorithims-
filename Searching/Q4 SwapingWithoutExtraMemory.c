#include<stdio.h>>
int* swap(int *arr,int n)
{
    int i;
    for(i=0;i<n/2;i++)
    {
        arr[i]=arr[i]+arr[n-1-i];
        arr[n-1-i]=arr[i]-arr[n-1-i];
        arr[i]=arr[i]-arr[n-1-i];
    }
    return arr;
}
void main()
{
    int arr[]={1,2,3,4,5,6,7,8,9},size=0,i,*pArr;
    size=sizeof(arr)/sizeof(arr[0]);
    pArr=swap(&arr,size);
    for(i=0;i<size;i++)
        printf("%d ",*(pArr+i));
}


