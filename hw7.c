#include <stdio.h>

void swapArrays(int* arr1, int* arr2, int size)
{
    for (int i = 0; i < size; i++)
    {
        int temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}

int main()
{
    int arr1[6] = { 1, 2, 3, 4, 5, 6 };
    int arr2[6] = { 7, 8, 9, 10, 11, 12 };

    printf("arr1: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\narr2: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    swapArrays(arr1, arr2, 6);

    printf("\nAfter swap:\n");
    printf("arr1: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\narr2: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}