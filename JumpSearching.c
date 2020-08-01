#include<stdio.h>
#include<math.h>

int jumpSearching(int *arr,int n,int data)
{
    int blocksz=sqrt(n),strt,i,end,flag=0;
    strt=0;
    end=blocksz;
    while(arr[end]<data&&end<=n)
    {
        strt=end;
        end =end+blocksz;
        if(end>n)
            end=n;
    }
    for(i=strt;i<=end;i++)
     {
        if(arr[i]==data)
          return i+1;
     }
    if(flag==0)
    {
        return 0;
    }
}

void main()
{
    int arr[]={5,1,23,78,45,66,2,0},i,n=8,temp,data,flag;
    printf("Enter the data to found..\n");
    scanf("%d",&data);
    for(i=0;i<n;i++)
        if(arr[i]>arr[i+1])
    {
        temp=arr[i];
        arr[i]=arr[i+1];    // sorting the list
        arr[i+1]=temp;
        i=-1;
    }
    flag=jumpSearching( &arr, n,data);
    if(flag==0)
        printf("Data is not present in list");
    else
        printf("Data is present at %dth position of list",flag);

}

