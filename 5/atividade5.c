#include <stdio.h>
#include <locale.h>
// Função para contar quantas vezes um valor aparece no vetor
int contarValor(int vetor[], int tamanho, int valor) {
    int contador = 0, i;

    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            contador++;
        }
    }

    return contador;
}

int main() {
    int N, valor, i;
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

    printf("Digite o valor a ser procurado no vetor: ");
    scanf("%d", &valor);

    // Chamando a função para contar quantas vezes o valor aparece no vetor
    int quantidade = contarValor(vetor, N, valor);

    printf("O vetor é: ");
    for (i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("O valor %d aparece %d vezes no vetor.\n", valor, quantidade);

    return 0; // Código de saída indicando sucesso
}

