#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
// Função para verificar se um número está no vetor e retornar sua posição
int verificarNumero(int vetor[], int tamanho, int numero) {
	int i;
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == numero) {
            return i; // Retorna a posição onde o número foi encontrado
        }
    }
    return -1; // Retorna -1 se o número não foi encontrado no vetor
}

int main() {
    int N, numero, i;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o número de elementos no vetor: ");
    scanf("%d", &N);

    if (N <= 0 || N > 100) {
        printf("Número de elementos inválido. Deve estar entre 1 e 100.\n");
        return 1; // Código de saída indicando erro
    }

    int vetor[N];

    // Inicializando o gerador de números aleatórios com o tempo atual
    srand(time(NULL));

    printf("Gerando vetor de números aleatórios...\n");
    for (i = 0; i < N; i++) {
        vetor[i] = rand() % 100; // Gera um número aleatório entre 0 e 99
    }

    printf("Digite um número para verificar se está no vetor: ");
    scanf("%d", &numero);

    // Chamando a função para verificar se o número está no vetor
    int posicao = verificarNumero(vetor, N, numero);

    if (posicao != -1) {
        printf("O número %d foi encontrado no vetor na posição %d.\n", numero, posicao);
    } else {
        printf("O número %d não foi encontrado no vetor.\n", numero);
    }

    printf("O vetor é: ");
    for (i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0; // Código de saída indicando sucesso
}

