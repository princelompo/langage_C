#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define taille_max 100

int main(){
    char word1[taille_max], word2[taille_max];
    printf("Enter the first word: ");
    if(scanf("%99s", word1) != 1){
        return 1;
    }
    printf("Enter the second word: ");
    if(scanf("%99s", word2) != 1){
        return 1;
    }
    char *pos = strstr(word1, word2);
    if(pos != NULL){
        int long1 = strlen(word1);
        int long2 = strlen(word2);

        memmove(pos, pos + long2, long1 - (pos - word1) - long2 + 1);

        printf("The word after deletion is: %s\n", word1);
    } else {
        printf("The word was not found.\n");
    }

    
    system("pause");

    return 0;

}