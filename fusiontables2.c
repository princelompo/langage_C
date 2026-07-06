#include<stdio.h>
#include<stdlib.h>

int *fusionner(int *A, int *B,int sizeA, int sizeB, int *sumsize){
    int *fusion = (int*)calloc(sizeA+sizeB,sizeof(int));
    if (fusion == NULL){
        *sumsize = 0;
        return NULL;
    }
    int *p = fusion;
    int *pA = A;
    int *pB = B;

    for(int i = 0; i < sizeA; i++){
        *p++ = *pA++;
    }
    for(int i = 0; i < sizeB; i++){
        *p++ =*pB++;
    }
    *sumsize = sizeA + sizeB;

    return fusion;

}

int main(){
    int tabA[] = {11,22,77,94,-77,9,0,754,111};
    int tabB[] = {-10,20,-30,-40,50,60,-70,80,90,-100,2006};
    int sizeA = sizeof(tabA) / sizeof(tabA[0]);
    int sizeB = sizeof(tabB) / sizeof(tabB[0]);
    int somsize;

    int *tabfusion = fusionner(tabA,tabB,sizeA,sizeB,&somsize);
    if(tabfusion == NULL){
        printf("Memory allocation failed");
        return 1;
    }
    printf("Fusion of arrays : \n");
    for(int *i = tabfusion ; i < tabfusion+somsize ; i++){
        printf(" %d ",*i);
    }
    free(tabfusion);

    printf("\n\n");
    system("pause");


    return 0;

}