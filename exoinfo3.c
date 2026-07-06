#include<stdio.h>
#include<stdlib.h>
#include<string.h>


// void funct(char *str){
//     int i, j, index = 10;
//     int longueur = strlen(str);
//     for(i = 0 ; i < longueur ; i++){
//         for(j = 0; j < index ; j++){
//             if(*(str+i) <= *(str+j)){
//                 break;
//             }
//         }
//         if(j == index){
//                 *(str+index) = *(str+i);
//                 index++;
//             }
//     }
//     *(str+index) = '\0';

// }

int main(){

    printf("\n");
    // char chaine[] = "tester ce code";
    // funct(chaine);
    // printf("%s",chaine);

    // printf("%d \n",30/20);
    // char a;
    // a = 65;
    // printf("%d %c",a,a);

    float alpha = 10000000, beta = 5000000;
    int compteur = 0;

    while(alpha > beta){
        alpha += 500000;
        beta += beta*3/100;
        compteur++;
    }
    printf(" Nombres d'annees : %d\n",compteur);

    return 0;
}
