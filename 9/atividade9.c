#include <stdio.h>
#include <string.h>
#include <locale.h>
int main() {
    char vetor[100];
    int i, tamanho;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite uma sequência de caracteres: ");
    gets(vetor); // Lê uma linha de caracteres (deve ser usada com cautela devido a problemas de segurança)

    tamanho = strlen(vetor);

    printf("Vetor lido em ordem inversa: ");
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", vetor[i]);
    }
    printf("\n");

    return 0; // Código de saída indicando sucesso
}

