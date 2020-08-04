#include<stdio.h>
#include<math.h>
#include<conio.h>
void linear_Search(int *arr,int n,int data)
{
   int flag=0;
     for(int i=0;i<n;i++)
    {
        if(arr[i]==data)
           {
                printf("Data is found..: %d at the %d position\n",data,i);
                flag=1;
                break;
           }
    }
    if(flag==0)
        printf("Data is not found.\n");
}
void binary_search(int *arr,int n,int data )
{
    int fst=0,lst=n-1,flag=0;
    while(fst<=lst)
    {
      int mid=(fst+lst)/2 ;
      if(data==arr[mid])
        {
            printf("Data=%d is found at index=%d\n",data,mid);
            flag=1;
            break;
        }
      else if(data<arr[mid])
            lst=mid-1;
        else
            fst=mid+1;
    }if(flag==0)
       printf("Data is not Found.\n");
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
         printf("Data=%d is found at index=%d\n",data,i);
         flag=1;
          break;
     }
     if(flag==0)
       printf("Data is not Found.\n");
}

void main()
{
    int choice;
    int n,data;
    a:
    printf("\nEnter your choice ..\n1: for linear search\n2: for binary search\n3: for jump search\n4: Exit\n");
    scanf("%d",&choice);
    if(choice==4)
        exit(0);
   printf("Enter the size of array..\n ") ;
   scanf("%d",&n);
   int arr[n];
   printf("Enter the array elements..\n");
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
    switch(choice)
    {

    case 1:
        printf("Enter the element which you want to search.\n");
 scanf("%d",&data);
        linear_Search(&arr,n,data);
       goto a;

    case 2:
        printf("Enter the element which you want to search.\n");
scanf("%d",&data);
        binary_search(&arr,n,data);
        goto a;

    case 3:
        printf("Enter the element which you want to search.\n");
scanf("%d",&data);
        jump_Search(&arr,n,data);
       goto a;
    default:
        printf("Wrong choice ....\n");
        goto a;

    }

}
