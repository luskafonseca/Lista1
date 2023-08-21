#include <stdio.h>
#include <locale.h>
// Fun��o para encontrar o maior elemento do vetor
double encontrarMaior(double vetor[], int tamanho) {
    double maior = vetor[0]; // Supomos que o primeiro elemento � o maior
	int i; 
    for (i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i]; // Atualizamos o maior elemento
        }
    }

    return maior;
}

int main() {
    int n, i;
    double vetor[n], maior;
	setlocale(LC_ALL, "Portuguese");
    printf("Digite o n�mero de elementos no vetor: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("N�mero de elementos invalido. Deve estar entre 1 e 100.\n");
        return 1; // C�digo de sa�da indicando erro
    }

    printf("Digite os %d elementos do vetor:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    // Chamando a fun��o para encontrar o maior elemento
    maior = encontrarMaior(vetor, n);

    printf("O vetor e: ");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("O maior elemento do vetor: %d\n", maior);

    return 0; // C�digo de sa�da indicando sucesso
}

