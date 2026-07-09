//Find the unique number in a given array where all the elements are being repeated twice with one value being unique.
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[] = {1, 3, 6, 1, 2, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        bool unique = true;

        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                unique = false;
                break;
            }
        }

        if (unique)
        {
            printf("The unique element is %d", arr[i]);
            break;
        }
    }

    return 0;
}