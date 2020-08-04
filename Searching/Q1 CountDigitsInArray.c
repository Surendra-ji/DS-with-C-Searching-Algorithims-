#include<stdio.h>
  int * freq(int* arr,int n,int aa,int bb,int cc)
  {
     static int  a[]={0,0,0};
     int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==aa)
            a[0] +=1;
        else if(arr[i]==bb)
            a[1] +=1;
        else if(arr[i]==cc)
            a[2]+=1;
    }
    return a;
    }

int  main()
{
    int n,aa=2,bb=3,cc=5;
    int arr[]={1,2,1,2,4,5,3,4,5,6,7,8,7,6,5,4,3,2,3,4,5,6,5,3,2,3,4,5,6,7,8,6,5,4,3,2,2,3,3,4,5,3,2,1,2,3,4,5,6,7,8};
    int* p;
    n=sizeof(arr)/sizeof(arr[0]);
    printf("Count frequency of 2,3,5,\nSize= %d\n",n);
    p=freq(&arr,n,aa,bb,cc);
    printf("2= %d\n3= %d\n5= %d\n",*(p+0),*(p+1),*(p+2));
    return 0;
}



