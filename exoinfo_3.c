#include<stdio.h>
#include<stdlib.h>

int main(){

    int T[8] = {0, 1, 2, 3, 4, 5, 6} ;
    int A[3][4] = {{1, 2, 3},{4, 5},{6}} ;
    int i, *p = T , *q = A ;

    printf(" *p = %d \n", *p) ;
    (*(p+2))--;

    for(i = 0 ; i<= 7; i++){
        *p = *(p+1);
        printf(" %d  ",*p);
        p++;
    }
    printf("\n");
    printf(" T[1] = %d \n", T[1]);
    printf(" *(q+1) = %d \n",*(q+1));
    printf(" *(*(A+1)+1) = %d \n",*(*(A+1)+1));

    int t[3][8]= {{8,89,0,55,100,5},{3,133,-77,44,99,111,1},{100,-99,-1345,89}};
    int *r = t;
    printf("%d \n",*(r+8));
    printf("%d \n",t[0][6]);
    printf("%d \n",*(t+5));


    return 0;
}
