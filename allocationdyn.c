#include<stdio.h>
#include<stdlib.h>
int main()
{
    /* 
    Dynamic memory allocation for an array of player scores
     using malloc and freeing the memory after use.
     using calloc(data, size) is also an option.
     using realloc(ptr, newsize) is also an option.
     using free(ptr) to release the allocated memory.
     */ 

    int no_of_players;
    int *scores = NULL;
    int i;
    printf("Enter the number of players: ");
    scanf("%d", &no_of_players);
    scores = (int *)malloc(no_of_players * sizeof(int));
    if (scores == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    for (i = 0; i < no_of_players; i++) {
        printf("Enter score for player %d: ", i + 1);
        scanf("%d", &scores[i]);
    }
    printf("Scores of players:\n");
    for (i = 0; i < no_of_players; i++) {
        printf("Player %d: %d\n", i + 1, scores[i]);
    }  
    free(scores);


    int num;
    printf("Enter the size of the array: ");
    scanf("%d", &num);
    int *arr = (int *)malloc(num * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    printf("Enter elements of the array:\n");
    for (i = 0; i < num; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Elements of the array are:\t");
    for (i = 0; i < num; i++) { 
        printf("%d \t", arr[i]);
    }   
    printf("\n");
    free(arr);  

    

    printf("Memory allocation and deallocation example completed successfully.\n");


    return 0;


    system("pause");

}