#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT 100
#define MAX_NUMBERS 50
#define MAX_STRINGS 50

int main() {
    char input[MAX_INPUT];
    double numbers[MAX_NUMBERS];
    char strings[MAX_STRINGS][MAX_INPUT];
    int num_count = 0, str_count = 0;
    double max_number = -__DBL_MAX__; 
    int max_length = 0;
    char longest_string[MAX_INPUT] = "";

    printf("Digite números ou palavras (digite 'sair' para terminar):\n");

    while (1) {
        printf("Entrada: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0; 

        if (strcmp(input, "sair") == 0) {
            break; 
        }

        
        char *end;
        double num = strtod(input, &end);

        if (end != input && *end == '\0') {
            
            numbers[num_count++] = num;
            if (num > max_number) {
                max_number = num;
            }
        } else {
            
            strcpy(strings[str_count++], input);
            int length = strlen(input);
            if (length > max_length) {
                max_length = length;
                strcpy(longest_string, input); 
            }
        }
    }

    // Exibindo o resultados
    printf("\nElementos lidos:\n");

    for (int i = 0; i < num_count; i++) {
        printf("Número: %.2f\n", numbers[i]);
    }

    for (int i = 0; i < str_count; i++) {
        printf("String: %s\n", strings[i]);
    }

    if (num_count > 0) {
        printf("\nMaior número lido: %.2f\n", max_number);
    } else {
        printf("\nNenhum número foi lido.\n");
    }

    if (max_length > 0) {
        printf("String com maior comprimento: %s (comprimento: %d)\n", longest_string, max_length);
    } else {
        printf("Nenhuma string foi lida.\n");
    }

    return 0;
}



