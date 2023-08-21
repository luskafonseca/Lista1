#include <stdio.h>
#include <locale.h>
// Fun��o para contar quantas vezes um valor aparece no vetor
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

    printf("Digite o valor a ser procurado no vetor: ");
    scanf("%d", &valor);

    // Chamando a fun��o para contar quantas vezes o valor aparece no vetor
    int quantidade = contarValor(vetor, N, valor);

    printf("O vetor �: ");
    for (i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("O valor %d aparece %d vezes no vetor.\n", valor, quantidade);

    return 0; // C�digo de sa�da indicando sucesso
}

