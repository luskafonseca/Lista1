#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
    double notas[5]; // Array para armazenar as notas
    double notaFinal = 0.0;
    int i;
    
    // Leitura das notas
    for (i = 0; i < 5; i++) {
    	printf("Entre com as notas\n");
        scanf("%lf", &notas[i]);
    }

    // Encontrar a menor e a maior nota
    double menorNota = notas[0];
    double maiorNota = notas[0];
    
    for (i = 1; i < 5; i++) {
        if (notas[i] < menorNota) {
            menorNota = notas[i];
        }
        if (notas[i] > maiorNota) {
            maiorNota = notas[i];
        }
    }

    // Soma das três notas centrais (excluindo a menor e a maior)
    for (i = 0; i < 5; i++) {
        if (notas[i] != menorNota && notas[i] != maiorNota) {
            notaFinal += notas[i];
        }
    }


    // Exibição da nota final com uma casa decimal
    printf("%.1lf\n", notaFinal);

    return 0; // Código de saída indicando sucesso
}

