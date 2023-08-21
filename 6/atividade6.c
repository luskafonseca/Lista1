#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
// Fun��o para verificar se um n�mero est� no vetor e retornar sua posi��o
int verificarNumero(int vetor[], int tamanho, int numero) {
	int i;
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] == numero) {
            return i; // Retorna a posi��o onde o n�mero foi encontrado
        }
    }
    return -1; // Retorna -1 se o n�mero n�o foi encontrado no vetor
}

int main() {
    int N, numero, i;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o n�mero de elementos no vetor: ");
    scanf("%d", &N);

    if (N <= 0 || N > 100) {
        printf("N�mero de elementos inv�lido. Deve estar entre 1 e 100.\n");
        return 1; // C�digo de sa�da indicando erro
    }

    int vetor[N];

    // Inicializando o gerador de n�meros aleat�rios com o tempo atual
    srand(time(NULL));

    printf("Gerando vetor de n�meros aleat�rios...\n");
    for (i = 0; i < N; i++) {
        vetor[i] = rand() % 100; // Gera um n�mero aleat�rio entre 0 e 99
    }

    printf("Digite um n�mero para verificar se est� no vetor: ");
    scanf("%d", &numero);

    // Chamando a fun��o para verificar se o n�mero est� no vetor
    int posicao = verificarNumero(vetor, N, numero);

    if (posicao != -1) {
        printf("O n�mero %d foi encontrado no vetor na posi��o %d.\n", numero, posicao);
    } else {
        printf("O n�mero %d n�o foi encontrado no vetor.\n", numero);
    }

    printf("O vetor �: ");
    for (i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0; // C�digo de sa�da indicando sucesso
}

