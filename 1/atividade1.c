#include <stdio.h>
#include <locale.h>
// Função para calcular a soma dos elementos de um vetor
int calcularSoma(int vetor[], int tamanho) {
    int soma = 0, i;
    for (i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main() {
    int N, i;
	setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor de N (limite max 100): ");
    scanf("%d", &N);

    if (N <= 0 || N > 100) {
        printf("Valor de N invalido. O valor deve estar entre 1 e 100.\n");
        return 1; // Código de saída indicando erro
    }

    int vetor[N];

    // Preenchendo o vetor com valores informados pelo usuário
    printf("Digite os %d elementos do vetor:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    // Chamando a função para calcular a soma dos elementos do vetor
    int soma = calcularSoma(vetor, N);

    printf("A soma dos elementos do vetor: %d\n", soma);

    return 0; // Código de saída indicando sucesso
}

