#include<stdio.h>
#include<stdlib.h>
int main()

{
    FILE *monfichier;
    monfichier=fopen("example.txt", "w");
    if(monfichier == NULL) {
        exit(1);
    }

    fprintf(monfichier, "Bonjour bb, comment vas tu  !!\nJe vais bien, merci !\nEt chez toi mon coeur !\nOk, a plus tard !\n");



    fclose(monfichier);
}