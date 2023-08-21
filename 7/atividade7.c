#include <stdio.h>
#include <locale.h>
int main() {
    int N, i;
	setlocale(LC_ALL, "Portuguese");
    printf("Digite o n�mero de elementos nos vetores: ");
    scanf("%d", &N);

    if (N <= 0 || N > 100) {
        printf("N�mero de elementos inv�lido. Deve estar entre 1 e 100.\n");
        return 1; // C�digo de sa�da indicando erro
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

    // Multiplica��o dos elementos de mesmo �ndice e armazenamento no vetor resultado
    for (i = 0; i < N; i++) {
        resultado[i] = vetor1[i] * vetor2[i];
    }

    printf("Vetor resultante da multiplica��o:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0; // C�digo de sa�da indicando sucesso
}

