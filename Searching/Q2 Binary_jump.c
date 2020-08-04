#include<stdio.h>
void main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,13,15,18,19,23,25,27,31,35,42,47,49},size,i,element,j;
    printf("Enter the element to search..\n");
    scanf("%d",&element);
    size=sizeof(arr)/sizeof(arr[0]);
   i= binary_search(&arr,size,element);
   printf("With Binary search..........\n");
   if(i==0)
    printf("No Element is found\n");
   else
    printf("Data= %d is found at index= %d\n",element,--i);
    j=jump_Search(&arr,size,element);
    printf("With Jump search..........\n");
    if(j==0)
    printf("No Element is found\n");
   else
    printf("Data= %d is found at index= %d",element,--j);

}

int binary_search(int *arr,int n,int data )
{
    int fst=0,lst=n-1;
    while(fst<=lst)
    {
      int mid=(fst+lst)/2 ;
      if(data==arr[mid])
        {
            return ++mid;
            break;
        }
      else if(data<arr[mid])
            lst=mid-1;
        else
            fst=mid+1;
    }

       return 0;
}

int jump_Search(int *arr,int n,int data)
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
          {return i+1;
          break;
     }
     }
        return 0;

}


