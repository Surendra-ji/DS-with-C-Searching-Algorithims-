//binary search
#include<stdio.h>
void main()
{
    int arr[]={5,1,23,78,45,66,2,0},i,n=8,temp,data,flag=0;
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
    int fst=0,lst=n-1;
    while(fst<=lst)
    {
      int mid=(fst+lst)/2 ;
      if(data==arr[mid])
        {
            printf("Data is found..: %d at the %d position\n",data,mid);
            flag=1;
            break;
        }
      else if(data<arr[mid])
            lst=mid-1;
        else
            fst=mid+1;
    }
    if(flag==0)
        printf("Data is not found.\n");

}
