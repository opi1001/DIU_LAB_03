 //Write a program to delete a number from an array.

#include <stdio.h>
int main()
{
    int i,n,pos;
    scanf("%d",&n);

    int arr[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("deleted position: ");
    scanf("%d",&pos);
    for(i=pos;i<n-1;i++)
        arr[i]=arr[i+1];
        n--;

    printf("after deletion:");

    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}
