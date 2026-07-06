#include<stdio.h>
#include<stdlib.h>

void diagonale_sup(int T[10][10],int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j == i){
                T[i][j] = T[i+1][j+1];
            }
        }
    }
}


int main(){
    int n, m;

    printf(" Entrer les lignes : ");
    scanf("%d", &n);
    printf(" Entrer les colonnes : ");
    scanf("%d", &m);

    int M[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &M[i][j]);
        }
    }

    diagonale_sup(M,n,m);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        printf("%d   ",M[i][j]);
        }
        printf("\n");
    }


}