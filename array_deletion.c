#include <stdio.h>
void traverse(int arr[], int used)
{
    for (int i = 0; i < used; i++)
    {
        printf("%d ", arr[i]);
    }
}

void deletion(int arr[], int used, int index)
{
    for (int i = index; i < used - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int capacity = 100, used = 9, element, index;
    printf("Enter index:");
    scanf("%d", &index);
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 10};
    traverse(arr, used);
    printf("\n");
    
    deletion(arr, used, index);
    used -= 1;
    traverse(arr, used);
}