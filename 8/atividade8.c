#include <stdio.h>
#include <locale.h>
int main() {
    int N, i;
	setlocale(LC_ALL, "Portuguese");
    printf("Digite o n�mero de lan�amentos do dado: ");
    scanf("%d", &N);

    if (N <= 0 || N > 1000) {
        printf("N�mero de lan�amentos inv�lido. Deve estar entre 1 e 1000.\n");
        return 1; // C�digo de sa�da indicando erro
    }

    int vetor[N];
    int ocorrencias[6] = {0}; // Inicializa o array de ocorr�ncias com zeros

    printf("Digite os resultados dos %d lan�amentos do dado:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);

        // Verifica se o valor est� no intervalo de 1 a 6 (faces de um dado)
        if (vetor[i] >= 1 && vetor[i] <= 6) {
            ocorrencias[vetor[i] - 1]++; // Incrementa a contagem da face correspondente
        } else {
            printf("Valor inv�lido no lan�amento %d. Deve estar entre 1 e 6.\n", i + 1);
            return 1; // C�digo de sa�da indicando erro
        }
    }

    printf("Ocorr�ncias de cada face do dado:\n");
    for (i = 0; i < 6; i++) {
        printf("Face %d: %d ocorr�ncias\n", i + 1, ocorrencias[i]);
    }

    return 0; // C�digo de sa�da indicando sucesso
}

