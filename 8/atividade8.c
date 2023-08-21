#include <stdio.h>
#include <locale.h>
int main() {
    int N, i;
	setlocale(LC_ALL, "Portuguese");
    printf("Digite o número de lançamentos do dado: ");
    scanf("%d", &N);

    if (N <= 0 || N > 1000) {
        printf("Número de lançamentos inválido. Deve estar entre 1 e 1000.\n");
        return 1; // Código de saída indicando erro
    }

    int vetor[N];
    int ocorrencias[6] = {0}; // Inicializa o array de ocorrências com zeros

    printf("Digite os resultados dos %d lançamentos do dado:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);

        // Verifica se o valor está no intervalo de 1 a 6 (faces de um dado)
        if (vetor[i] >= 1 && vetor[i] <= 6) {
            ocorrencias[vetor[i] - 1]++; // Incrementa a contagem da face correspondente
        } else {
            printf("Valor inválido no lançamento %d. Deve estar entre 1 e 6.\n", i + 1);
            return 1; // Código de saída indicando erro
        }
    }

    printf("Ocorrências de cada face do dado:\n");
    for (i = 0; i < 6; i++) {
        printf("Face %d: %d ocorrências\n", i + 1, ocorrencias[i]);
    }

    return 0; // Código de saída indicando sucesso
}

