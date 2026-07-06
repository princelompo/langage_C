#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define taille 100

void *sup_occurence(char *mot1, char *mot2){
    char *trouve = strstr(mot1, mot2);
    if(trouve != NULL){
        int long2 = strlen(mot2);
        int long_restante = strlen(trouve + long2) + 1;

        for(int i = 0; i < long_restante; i++){
            trouve[i] = trouve[i+long2];
        }
    }
}
int main(){
    char mot1[taille], mot2[taille];
    printf("Entrer le premier mot: ");    
    if(scanf("%99s", mot1) != 1){
        return 1;
    }
    printf("Entrer le deuxieme mot: ");
    if(scanf("%99s", mot2) != 1){
        return 1;
    }

    sup_occurence(mot1, mot2);
    printf("Le mot apres suppression est: %s\n", mot1);

    system("pause");

    return 0;
    
}