#include <stdio.h>
int binarySearch(int a[], int low, int high, int key)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (a[mid] == key)
            return mid;
        if (a[mid] > key)
            return binarySearch(a, low, mid - 1, key);
        return binarySearch(a, mid + 1, high, key);
    }
    return -1;
}
int main(void)
{
    int a[20];
    int i, n, key;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements (in ascending order) of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the number to be searched\n");
    scanf("%d", &key);

    int result = binarySearch(a, 0, n - 1, key);
    
    if (result == -1)
        printf("Element is not present in array\n");
    else
        printf("Element is present at index %d\n", result);
    return 0;
}