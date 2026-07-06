#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("\n");

    float *A,*B;
    int siez1,siez2;
    printf(" Enter the size of array A: ");
    scanf("%d",&siez1);
    printf(" Enter the size of array B: ");
    scanf("%d",&siez2);

    printf("\n");

    A=(float*)calloc(siez1,sizeof(float));
    if(A==NULL){
        printf(" Memory not allocated\n");
        exit(0);
    }
    for (int i = 0; i < siez1; i++){
        printf(" Enter the element %d of array A: ",i+1);
        scanf("%f",&A[i]); 
    }
    printf("\n");

    B=(float*)calloc(siez2,sizeof(float));
    if(B==NULL){
        printf(" Memory not allocated\n");
        exit(0);
    }
    for (int i = 0; i < siez2; i++){
        printf(" Enter the element %d of array B: ",i+1);
        scanf("%f",&B[i]);
    }
    printf("\n");

    printf(" The elements of array A are:\n");
    for (int i = 0; i < siez1; i++){
        printf(" %.2f ; ",A[i]);
    }
    printf("\n");
    printf("\n");

    printf(" The elements of array B are:\n");
    for (int i = 0; i < siez2; i++){
        printf(" %.2f ; ",B[i]);
    }
    printf("\n");
    printf("\n");

    float *fusionn;
    printf(" Fusion of array A and B:\n");
    fusionn=(float*)calloc(siez1+siez2,sizeof(float));
    if(fusionn==NULL){
        printf("Memory not allocated\n");
        exit(0);
    }
    int i,j,k;
    i=0,j=0,k=0;
    while(i<siez1 && j<siez2){
        if(A[i]<B[j]){
            fusionn[k++]=A[i++];
        }
        else{
            fusionn[k++]=B[j++];
        }
    }
    while(i<siez1){
        fusionn[k++]=A[i++];
    }
    while(j<siez2){
        fusionn[k++]=B[j++];
    }
    for (int i = 0; i < siez1+siez2; i++){
        printf(" %.2f ; ",fusionn[i]);
    }
    printf("\n");
    printf("\n");


    free(A);
    free(B);
    free(fusionn);

    system("pause");

    return 0;

}
