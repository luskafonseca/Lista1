#include <stdio.h>
#include <string.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
    char DNA[51]; // Limite de 50 bases + 1 para o caractere nulo
    char complementar[51]; // Vetor complementar
    int tamanho, i;

    printf("Digite a sequ�ncia de bases do DNA (ATCG): ");
    scanf("%s", DNA);

    tamanho = strlen(DNA);

    for (i = 0; i < tamanho; i++) {
        switch (DNA[i]) {
            case 'A':
                complementar[i] = 'T';
                break;
            case 'T':
                complementar[i] = 'A';
                break;
            case 'C':
                complementar[i] = 'G';
                break;
            case 'G':
                complementar[i] = 'C';
                break;
            default:
                printf("Base inv�lida na posi��o %d: %c\n", i, DNA[i]);
                return 1; // C�digo de sa�da indicando erro
        }
    }

    complementar[tamanho] = '\0'; // Adiciona o caractere nulo ao final do vetor complementar

    printf("Vetor complementar:\n");
    printf("%s\n", complementar);

    return 0; // C�digo de sa�da indicando sucesso
}

