#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float lnsin(int n){
    return sin(n)+log(n)+sqrt(n);
}

int main(){
    int x;
    printf("Entrer la valeur de x : ");
    scanf("%i",&x);
    printf(" f(%i) = %f ",x,lnsin(x));


    

    return 0;


}