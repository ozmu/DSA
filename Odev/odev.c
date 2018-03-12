#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

struct compares {
    int plus;
    int minus;
};

typedef struct compares compare;

int generator();
bool duplicateControl(char *);
compare correctKey(char *, char *);


int main(){
    char sayi[4];
    char input[4];
    // Sayıyı char arraye (String) çevir.
    sprintf(sayi, "%d", generator());
    printf("Sayı: %s\n", sayi);
    /*if(duplicateControl(sayi)){
        printf("Oldu");
    }
    else{
        printf("Olmadı");
    }*/

    printf("Tahmin girin: ");
    scanf("%s", input);

    compare x = correctKey(input,sayi);
    printf("%d", x.plus);
    
}

int generator(){
    int i, n;
    time_t t;
    /* Intializes random number generator */
    srand((unsigned) time(&t));
    int sayi = rand() % (9999 + 1 - 1000) + 1000;
    sprintf(sayi, "%d", sayi);
    while(!duplicateControl(sayi)){
        sayi = rand() % (9999 + 1 - 1000) + 1000;
    }
    return sayi;
}

bool duplicateControl(char *sayi){
    for(int i=0; i<4; i++){
        for(int j=i+1; j<4; j++){
            if(sayi[j] == sayi[i]){
                return false;
            }
        }
    }
    return true;
}

compare correctKey(char *input, char *sayi){
    int plus=0,minus=0;
    for(int i=0; i<4; i++){
        if(input[i] == sayi[i]){
            plus++;
        }
        for(int j=0; j<4; j++){
            if(input[i] != sayi[i] && input[i] == sayi[j]){
                minus++;
            }
        }
    }
    compare final = {plus, minus};
    return final;
}