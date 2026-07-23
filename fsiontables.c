#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int *fusionner(const int *A, int size1, const int *B, int size2, int *fusionsize){
    int * fusionn=(int*)calloc(size1+size2,sizeof(int));
    if(fusionn==NULL){
        *fusionsize=0;
        return NULL;
    }
    memcpy(fusionn, A, size1 * sizeof(int));
    memcpy(fusionn + size1, B, size2 * sizeof(int));
    *fusionsize = size1 + size2;
    return fusionn;
}

int main() {
    int tabA[] = {90, 67, 99, 111, 44};
    int tabB[] = {12, 34, 56, 78};
    int sizeA = sizeof(tabA) / sizeof(tabA[0]);
    int sizeB = sizeof(tabB) / sizeof(tabB[0]);
    int sizeFusion;
    int *tabFusion = fusionner(tabA, sizeA, tabB, sizeB, &sizeFusion);
    if (tabFusion == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf(" Fusion of array A and B:\n");
    for (int *i = tabFusion; i < tabFusion + sizeFusion; i++) {
        printf(" %d  ", *i);
    }
    free(tabFusion);

    printf("\n");
    system("pause");

    return 0;
}
