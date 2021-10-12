#include <stdio.h>
int main()
{
    int arr[20];
    printf("Enter the array:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[2*i+1]);
    }
    int n,key1,key2;
    printf("Enter number to be placed :\n");
    scanf("%d",&n);
    printf("Numbers between which number need to be placed\n");
    scanf("%d %d", &key1, &key2);
    for (int i = 0; i < 9; i++)
    {
        if (arr[2*i+1]==key1 && arr[2*i+3]==key2)
        {
            arr[2*i+2] = n;
        }
        
    }
    for (int i = 0; i < 9; i++)
    {
            printf("%d ", arr[2*i+1]);

        if (arr[2*i+1]==key1 && arr[2*i+3]==key2)
        {
            printf("%d ", arr[2*i+2]);
        }
    }
    
    
    return 0;
}