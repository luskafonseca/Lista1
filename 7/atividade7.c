#include <stdio.h>
#include <locale.h>
int main() {
    int N, i;
	setlocale(LC_ALL, "Portuguese");
    printf("Digite o número de elementos nos vetores: ");
    scanf("%d", &N);

    if (N <= 0 || N > 100) {
        printf("Número de elementos inválido. Deve estar entre 1 e 100.\n");
        return 1; // Código de saída indicando erro
    }

    int vetor1[N];
    int vetor2[N];
    int resultado[N];

    printf("Preencha o primeiro vetor com %d elementos:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Preencha o segundo vetor com %d elementos:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &vetor2[i]);
    }

    // Multiplicação dos elementos de mesmo índice e armazenamento no vetor resultado
    for (i = 0; i < N; i++) {
        resultado[i] = vetor1[i] * vetor2[i];
    }

    printf("Vetor resultante da multiplicação:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0; // Código de saída indicando sucesso
}

