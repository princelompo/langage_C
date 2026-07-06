#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define taille_max 100

void vers_minuscules(char *str){
    for(int i=0; str[i]; i++){
        str[i] = tolower(str[i]);
    }
}
void vers_majuscules(char *str){
    for(int i=0; str[i]; i++){
        str[i] = toupper(str[i]);
    }
}
int main(){
    char mot1[taille_max], mot2[taille_max];
    printf("Entrer le premier mot: ");
    if(scanf("%99s", mot1) != 1){
        return 1;
    }
    printf("Entrer le deuxieme mot: ");
    if(scanf("%99s", mot2) != 1){
        return 1;
    }
    char mot1_min[taille_max], mot2_min[taille_max];
    strcpy(mot1_min, mot1);
    strcpy(mot2_min, mot2);
    vers_minuscules(mot1_min);
    vers_minuscules(mot2_min);

    char *position = strstr(mot1_min, mot2_min);
    if(position != NULL){
        int index = position - mot1_min;
        int longueur2 = strlen(mot2);
        int long_restante = strlen(mot1 + index + longueur2) + 1;

        memmove(mot1 + index, mot1 + index + longueur2, long_restante);
        printf("Le mot apres suppression est: %s\n", mot1);
    } else {
        printf("Le mot n'a pas ete trouve.\n"); 
    }

    system("pause");

    return 0;
}