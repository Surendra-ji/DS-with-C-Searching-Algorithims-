//Linear searching
#include<stdio.h>
void main()
{
    int arr[]={12,45,67,87,89},i,data,n=5,flag=0;

    printf("Enter the data to search..\n");
    scanf("%d",&data);
    for(i=0;i<n;i++)
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
