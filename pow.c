#include<stdio.h>

int main(){
    int base;
    int esponente;

    printf("Inserisci la base per elevare\n");
    scanf("%d", &base);
    printf("Inserisci l'esponente\n");
    scanf("%d", esponente);
    esponente = base * base;
    printf("%d * %d = %d\n", base, base, esponente);
    printf("Il numero elevato è %d", esponente);

    return 0;

}