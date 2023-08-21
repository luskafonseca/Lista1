#include <stdio.h>
#include <locale.h>
// Fun��o para contar quantos valores �mpares existem no vetor
int contarImpares(int vetor[], int tamanho) {
    int contador = 0, i;
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 != 0) {
            contador++;
        }
    }

    return contador;
}

int main() {
    int N, i;
	setlocale(LC_ALL, "Portuguese");
    printf("Digite o n�mero de elementos no vetor: ");
    scanf("%d", &N);

    if (N <= 0 || N > 100) {
        printf("N�mero de elementos inv�lido. Deve estar entre 1 e 100.\n");
        return 1; // C�digo de sa�da indicando erro
    }

    int vetor[N];

    printf("Digite os %d elementos do vetor:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    // Chamando a fun��o para contar os valores �mpares no vetor
    int quantidadeImpares = contarImpares(vetor, N);

    printf("O vetor �: ");
    for (i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Quantidade de valores �mpares no vetor: %d\n", quantidadeImpares);

    return 0; // C�digo de sa�da indicando sucesso
}

