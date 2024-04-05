#include <stdio.h>
void traverse(int arr[], int used)
{
    for (int i = 0; i < used; i++)
    {
        printf("%d ", arr[i]);
    }
}
void insertion(int arr[], int index, int element, int used, int capacity)
{
    if (used >= capacity)
    {
        printf("Insertion unsuccessful\n");
    }
    else
    {
        for (int i = used - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
        printf("Insertion successful\n");
    }
}
int main()
{
    int capacity = 100, used = 9, element, index;
    printf("Enter element:\n");
    scanf("%d", &element);
    printf("Enter index:");
    scanf("%d", &index);
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 10};
    traverse(arr, used);
    printf("\n");
    insertion(arr, index, element, used, capacity);
    used += 1;
    traverse(arr, used);
}