#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char mensagem[1001]; // Limite de 1000 caracteres + 1 para o caractere nulo
    char decodificada[1001]; // Vetor para a mensagem decodificada
    int tamanho, i;

    // Leitura da mensagem codificada
    gets(mensagem); // Lê uma linha de caracteres (usar fgets em ambientes de produção)

    tamanho = strlen(mensagem);

    int j = 0; // Índice para a mensagem decodificada

    // Decodificação da mensagem
    for (i = 0; i < tamanho; i++) {
        if (isalpha(mensagem[i])) {
            decodificada[j++] = mensagem[i]; // Copia a letra para a mensagem decodificada
        } else if ((mensagem[i] == 'p' || mensagem[i] == 'P') && isalpha(mensagem[i + 1])) {
            // Pula o caractere 'p' ou 'P' e acrescenta a próxima letra à mensagem decodificada
            i++;
            decodificada[j++] = mensagem[i];
        }
    }

    decodificada[j] = '\0'; // Adiciona o caractere nulo ao final do vetor decodificado

    printf("%s\n", decodificada); // Exibe a mensagem decodificada

    return 0; // Código de saída indicando sucesso
}

