#include<stdio.h>
int main()
{
    int a[10];
    int b[10];

    for(int i = 0; i < 10; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &*(a + i));
    }
    for(int i = 0; i < 10; i++){
        if(*(a + i) % 2 == 0){
            (*(a + i)) = (*(b+i));
        }
        else{
            *(b + i) = 0;
        }   
   }
    printf("\n");
    printf(" Tableau B : ");
    for(int i = 0; i < 10; i++){
        printf("%d \t",*(b+i));
   }

    return 0;
    
}