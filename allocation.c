#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Example of memory allocation and deallocation in C using calloc.\n");

    int n, i;
    int *ptr;
    printf("Enter number of elements: ");
    scanf("%d", &n);    
    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    printf("Enter elements of the array:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("Elements of the array are:\t");
    for (i = 0; i < n; i++) { 
        printf("%d \t", ptr[i]);
    }
    printf("\n");
    free(ptr);
    
    return 0;

}