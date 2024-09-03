#include <stdio.h>
#include <string.h>

void inverterString(char str[]) {
    int comprimento = strlen(str);
    int inicio = 0;
    int fim = comprimento - 1;

    while (inicio < fim) {
        char temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        inicio++;
        fim--;
    }
}

int main() {
    char str[255];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    size_t length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    inverterString(str);

    printf("String invertida: %s\n", str);

    return 0;
}
