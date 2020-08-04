#include<stdio.h>
int binary_search(int *arr,int fst,int lst,int data )
{
    while(fst<=lst)
    {
      int mid=(fst+(lst-1))/2 ;
    if(data==arr[mid])
        {
            return ++mid;
        }
    else if(data>arr[mid])
           {
            fst=mid+1;
            return binary_search(&arr,fst,lst,data);
           }
    else
            {
            lst=mid-1;
            return binary_search(&arr,fst,lst,data);
            }
    }
}

int exponential_search(int *arr,int n,int data)
{
    if(arr[0]==data)
        return 0;
    int i=1;
    while(i<n && arr[i]<=data)
        i=i*2;
    return binary_search(arr,i/2,i,data);
}
void main()
{
    int n,i,data;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of array..\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the data to search\n");
    scanf("%d",&data);
   i= exponential_search(&arr,n,data);
    if(i==0)
    printf("No Element is found\n");
   else
    printf("Data= %d is found at index= %d\n",data,--i);

}
