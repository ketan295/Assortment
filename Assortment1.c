#include <stdio.h>

main()

{
    int arr[100]; 
    int i, n;

    
    printf("Enter size of the array :\n");
    scanf("%d", &n);

    
    printf("Enter elements in array :\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nAll negative elements in array are : ");
    for(i=0; i<n; i++)
    {
        if(arr[i] < 0)
        {
            printf("%d,\t", arr[i]);
        }
    }
}