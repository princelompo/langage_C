#include<stdio.h>
#include<stdlib.h>

int facto(int n){
    if(n == 1){
        return 1;
    }
    return n * facto(n-1);
}

long factoriel(int x){
    if(x == 0){
        return 1;
    }
    int p = 1;
    for( int i = 1; i <= x; i++){
        p = p*i ; 
    }
    return p ;
}

int sum(int n ){
    if(n == 0){
        return 0;
    }
    return n + sum(n-1);
}

int main()
{
    printf("\n");

    int n, s;
    printf(" Entrer la valeur de n pour calculer n! : ");
    scanf("%d",&n);
    printf(" %d! = %d \n",n,facto(n));
    printf(" %d! precis = %d \n",n,factoriel(n));
    printf(" Entrer la valeur du nombre n  pour calculer la sonne des entiers qui le precede n inclus : ");
    scanf("%d",&s);
    printf(" somme des n = %d \n",sum(s));


    printf("\n");

    return 0;


}
