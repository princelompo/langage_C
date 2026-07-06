#include<stdio.h>
int main()
{
    int a[10];
    int b[10];

    for(int i = 0; i < 10; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    
    for(int i = 0; i < 10; i++){
        if(a[i] % 2 == 0){ // Check if the element is even
            b[i] = a[i]; // Store the even element in array b
        } else {
            b[i] = 0; // Store 0 if the element is odd
        }
    }

    printf("\n");
    printf("Tableau B :");
    for(int i = 0; i < 10; i++){
        printf("%d\t ", b[i]); // Print elements of array b
    }
    
    return 0;

}