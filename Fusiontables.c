 #include<stdio.h>
#include<stdlib.h>

    float *fusioner(const float *A, int siez1, const float *B, int siez2, int *fusionsize){
        float *fusionn=(float*)calloc(siez1+siez2,sizeof(float));
        if(fusionn == NULL){
            *fusionsize=0;
            return NULL;
        }
        float *ptr_fusionn=fusionn;
        const float *ptr_A=A;
        const float *ptr_B=B;

        for(int i=0;i<siez1;i++){
            *ptr_fusionn++=*ptr_A++;
        }
        for(int i=0;i<siez2;i++){
            *ptr_fusionn++=*ptr_B++;
        }
        *fusionsize=siez1+siez2;
        return fusionn;

    }
    
int main() {
    float tabA[] = {90, 67, 99, 111, 44};
    float tabB[] = {12, 34, 56, 78, 887, 911, -44};
    int sizeA = sizeof(tabA) / sizeof(tabA[0]);
    int sizeB = sizeof(tabB) / sizeof(tabB[0]);
    int sizeFusion;
    float *tabFusion = fusioner(tabA, sizeA, tabB, sizeB, &sizeFusion);
    if (tabFusion == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Fusion of array A and B:\n");
    for (float *i = tabFusion; i < tabFusion + sizeFusion; i++) {
        printf(" %.2f  ", *i);
    }
    free(tabFusion);

    printf("\n");

    system("pause");

    return 0;
}