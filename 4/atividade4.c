#include <stdio.h>
#include <locale.h>
// Função para contar quantos valores ímpares existem no vetor
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
    printf("Digite o número de elementos no vetor: ");
    scanf("%d", &N);

    if (N <= 0 || N > 100) {
        printf("Número de elementos inválido. Deve estar entre 1 e 100.\n");
        return 1; // Código de saída indicando erro
    }

    int vetor[N];

    printf("Digite os %d elementos do vetor:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    // Chamando a função para contar os valores ímpares no vetor
    int quantidadeImpares = contarImpares(vetor, N);

    printf("O vetor é: ");
    for (i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Quantidade de valores ímpares no vetor: %d\n", quantidadeImpares);

    return 0; // Código de saída indicando sucesso
}

