
 #include <stdio.h>
int main()
{
    int n,largest,smallest;
    int arr[10];
    scanf("%d", &n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest = smallest = arr[0];

     for (int i=1;i<n;i++)
        {
        if(arr[i] > largest)
            largest = arr[i];

        if(arr[i] < smallest)
            smallest = arr[i];
        }
      printf("Largest number: %d\n", largest);
     printf("Smallest number: %d\n", smallest);

    return 0;
}
