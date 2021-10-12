#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10]={2,6,10,14,18,3,7,11,15,19};
    int length=sizeof(arr)/sizeof(arr[0]);
    int i,pos=6;
    printf("\n intial numbers are : ");
    for(i=0;i<length;i++)
        printf(" %d ", arr[i]);
    for(i=pos-1;i<length;i++)
        arr[i]=arr[i+1];
    printf("\n new array is : ");
    for(i=0;i<length-1;i++)
        printf(" %d ",arr[i]);
    return 0;
}