#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max_palavras 10
#define MAX_TAM 50

int main() {
    char **palavras = NULL;
    int num_palavras = 0;

    while (num_palavras < max_palavras) {
        char palavra[MAX_TAM];

        printf("Digite uma palavra (fim para encerrar): ");
        fgets(palavra, MAX_TAM, stdin);
        palavra[strcspn(palavra, "\n")] = '\0';

        if (strcmp(palavra, "fim") == 0) {
            if (num_palavras == 0) {
                printf("Nenhuma palavra foi digitada.\n");
            }
            break;
        }

        // Realocar memória para o vetor de palavras
        palavras = (char**) realloc(palavras, (num_palavras + 1) * sizeof(char*));
        if (palavras == NULL) {
            fprintf(stderr, "Erro ao alocar memória.\n");
            return 1;
        }

        // Alocar memória para a nova palavra
        palavras[num_palavras] = (char*) malloc(strlen(palavra) + 1);
        if (palavras[num_palavras] == NULL) {
            fprintf(stderr, "Erro ao alocar memória.\n");
            return 1;
        }

        strcpy(palavras[num_palavras], palavra);
        num_palavras++;
    }

    if (num_palavras == max_palavras) {
        printf("Limite de palavras atingido.\n");
    }

    printf("\nPalavras digitadas:\n");
    for (int i = 0; i < num_palavras; i++) {
        printf("%s\n", palavras[i]);
    }

    for (int i = 0; i < num_palavras; i++) {
        free(palavras[i]);
    }
    free(palavras);

    return 0;
}


