#include <stdio.h>

main()

{
    int arr[1000], n, i;
    int max1, max2;


    printf("Enter size of the array (1-1000): ");
    scanf("%d", &n);

    printf("Enter elements in the array:\n ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<=n; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }
    printf("Second largest number  = %d", max2);

}