#include<stdio.h>
#include<stdlib.h>

double factoriel(int x){
    if(x == 0){
        return 1;
    }
    return x*factoriel(x-1);
}

int combinaison(int k, int n){
    if(k < 0 || n < 0 || k > n){
        printf("Erreur d'entrées !!");
    }
    return  factoriel(n)/(factoriel(k)*factoriel(n-k));
}

int main(){

    printf("\n");  
    printf(" Execution du programme....\n");
    printf("\n");

    printf(" Affichage du Triangle de Pascal avec combinaison de k dans n : \n");

    printf("\n");

    int l,c;
    do{
        printf(" Entrer le nombre de lignes limites : ");
        scanf("%d",&l);
    }while(l<0);

    do{
        printf(" Entrer le nombre de colones limites : ");
        scanf("%d",&c);
    }while(c<0);



    printf("\n");

    

    printf(" n|k\t");
    for(int i = 0 ; i <= c; i++){
        printf("%d\t",i);
    }
    printf("\n");
    printf(" --");
    for(int i = 0 ; i <= c; i++){
        printf("--------");
    }
    printf("\n");
    for(int i = 0 ; i <= l; i++){
        printf(" %d|\t",i);
        for(int j = 0; j <= c; j++){
            if(j <= i){
                printf("%d\t",combinaison(j,i));
            }
        }
        printf("\n");
    }

    printf("\n");
    printf(" Fin du programme....");
    printf("\n");

    return 0;
}
