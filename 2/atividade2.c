#include <stdio.h>
#include <locale.h>
// Função para encontrar o menor elemento do vetor
double encontrarMenor(double vetor[], int tamanho) {
    double menor = vetor[0]; // Supomos que o primeiro elemento é o menor
	int i;
    for (i = 1; i < tamanho; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i]; // Atualizamos o menor elemento
        }
    }

    return menor;
}

int main() {
    int n, i;
    double vetor[n];

    printf("Digite o numero de elementos no vetor: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Numero de elementos invalido. Deve estar entre 1 e 100.\n");
        return 1; // Código de saída indicando erro
    }

    printf("Digite os %d elementos do vetor:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    // Chamando a função para encontrar o menor elemento
    double menor = encontrarMenor(vetor, n);

    printf("O vetor e: ");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("O menor elemento do vetor e: %d\n", menor);

    return 0; // Código de saída indicando sucesso
}

