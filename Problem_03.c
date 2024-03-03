#include <stdio.h>
int main()
{
    int arr[100], n, i;
    int even_sum = 0, odd_sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
        {
        if (arr[i] % 2 == 0)
        {
            even_sum += arr[i];
        }
    else {
            odd_sum += arr[i];
        }
    }

    printf("Sum of even numbers: %d\n", even_sum);
    printf("Sum of odd numbers: %d\n", odd_sum);

    return 0;
}
