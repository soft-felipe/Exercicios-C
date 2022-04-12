#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {

    char string[100];
    int i, aberto = 0, fechado = 0;

    scanf("%s", &string);

    for (i = 0; i < strlen(string); i++) {

        if (string[i] == '(') {
            aberto++;
        } else if (string[i] == ')') {
            fechado++;
        }

        if (fechado > aberto) {
            printf("incorreta\n");
            return 0;
        }
    }
    printf("correta\n");

    return 0;
}
