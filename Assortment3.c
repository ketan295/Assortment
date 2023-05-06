#include <stdio.h>

main()
{
    int i, n;
    int arr[10];

    printf("Enter 10 elements in array:\n ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of times to right rotate: ");
    scanf("%d", &n);

    n = n%10;

    printf("\nArray before rotation:\n");
    
    for(i=0; i<10; i++) 
    {
        printf("%d ", arr[i]);
    }
  
    for(i=0;i<n;i++)
    {
         int j,last;
         last = arr[9];
         
        for(j=9; j>0; j--)
        {
            arr[j] = arr[j-1];
        }
       arr[0] = last;
    }

    printf("\n\nArray after rotation\n");
    
    for(i=0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }
}
 
