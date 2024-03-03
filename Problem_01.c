/* Write a program to store 10 integers using an array and find out
the summation and the average of the numbers. Display the numbers,
summation and average separately.*/

 #include<stdio.h>
int main()
{
    int i,n,Total_sum=0;
    float average;
    scanf("%d",&n);

    int arr[10];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
        Total_sum+=arr[i];
        average=Total_sum/n;
    {
        printf("Sum: %d",Total_sum);
        printf("Average: %f",average);
    }
    return 0;
}
