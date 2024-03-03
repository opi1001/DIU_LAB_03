 //Write a program to marge two array and make a single array.

  #include <stdio.h>
int main()
{
    int ar1[10];
    int ar2[10];
    int mergAr[20];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &ar1[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &ar2[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        mergAr[i] = ar1[i];
        mergAr[10 + i] = ar2[i];
    }

    printf("Merged Array: ");
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", mergAr[i]);
    }

    return 0;
}
