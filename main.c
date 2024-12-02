#include<stdio.h>
#include"math.h"

int main(){
    int somma(int, int);
    int differenza(int, int);
    int moltiplicazione(int, int);
    int divisione(int, int);
	int potenza(int, int);


	int risultato = 0;
	int uno, due;
	char operazione;
    printf("Inserisci il prima operando\n");
    scanf("%d", &uno);
    printf("Inserisci il secondo operando\n");
    scanf("%d", &due);
    printf("s)moltiplicazione d)differenza m)moltiplicazione d)divisione p)potenza\n");
    scanf("%c", &operazione);
    witch(operazione){
		case 's':
			risultato = somma(uno, due);
			break;
		case 'd':
			risultato = differenza(uno, due);
			break;
		case 'm':
			risultato = moltiplicazione(uno, due);
			break;
        case 'd':
            risultato = divisione(uno, due);
            break;
		case 'p':
			risultato 0 potenza(uno);
		default:
			printf("Operazione non riconosciuta\n");

	}
	printf("Il risultato e': %d\n", risultato);	
	return 0;
}
    

