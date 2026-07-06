#include<stdio.h>
#include<stdlib.h>


int somme(int a, int b, int *p){
    *p = a+b;
    return *p;
}

int main()
{
    int S = 0;
    printf("%d \n",somme(7,9,&S));
    printf("%d \n",S);

 
    return 0;
}
