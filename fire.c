#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    //abrir e ler o arquivo
    FILE *file;

    char linha[256];
    char linha_copiada[256];

    int anoUser;
    char *tmp; // guarda a última parte da string que foi cortada (variável temporária)
    char *partes[10]; // onde todas as partes são armazenadas juntas
    int i;

    int incendios = 0;

    printf("Você quer saber os incêndios de qual ano?\n");
    scanf("%i", &anoUser);

    file= fopen("amazon.csv", "r");
    if (file == NULL){
        perror("erro ao abrir arquivo");
        return 1;
    }

    //ler linha por linha
    while (fgets(linha, sizeof(linha), file) != NULL) {
        strcpy(linha_copiada, linha);

        i = 0;

        // pega a primeira parte da string até a vírgula e guarda na variável tmp
        tmp = strtok(linha_copiada, ",");

        // faz isso até que não tenham mais partes para serem cortadas ou o array fique cheio
        while (tmp != NULL && i < 10) {
            // guarda a parte cortadada no array de partes
            partes[i] = tmp;
            i++;
            // corta a próxima parte
            tmp = strtok(NULL, ",");
        }

        if(anoUser == atoi(partes[0])) {
            incendios += atoi(partes[3]);
        }
    }

    printf("Número de incêndios: %i\n", incendios);

    //fechar o arquivo
    fclose(file);
    return 0;
    //pedir pro usuario o ano que ele quer ver

return 0;
}




