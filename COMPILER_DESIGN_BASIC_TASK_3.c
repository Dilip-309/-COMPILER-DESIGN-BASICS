#include <stdio.h>
#include <string.h>
#include <ctype.h>

char reservedWords[][10] = {"int", "float", "if", "else", "while", "for", "return"};
char symbolOperators[] = "+-*/=<>";

int checkReserved(char *token) {
    for (int idx = 0; idx < 7; idx++) {
        if (strcmp(token, reservedWords[idx]) == 0)
            return 1;
    }
    return 0;
}

int isSymbol(char character) {
    for (int idx = 0; idx < strlen(symbolOperators); idx++) {
        if (character == symbolOperators[idx])
            return 1;
    }
    return 0;
}

int main() {
    char sourceCode[1000];
    char token[50];
    int pos = 0, tokenPos = 0;

    printf("Paste your code below:\n");
    fgets(sourceCode, sizeof(sourceCode), stdin);

    while (sourceCode[pos] != '\0') {
        if (isalnum(sourceCode[pos])) {
            token[tokenPos++] = sourceCode[pos];
        } else {
            if (tokenPos != 0) {
                token[tokenPos] = '\0';
                if (checkReserved(token))
                    printf("Keyword Found: %s\n", token);
                else
                    printf("Identifier Found: %s\n", token);
                tokenPos = 0;
            }
            if (isSymbol(sourceCode[pos])) {
                printf("Operator Detected: %c\n", sourceCode[pos]);
            }
        }
        pos++;
    }

    if (tokenPos != 0) {
        token[tokenPos] = '\0';
        if (checkReserved(token))
            printf("Keyword Found: %s\n", token);
        else
            printf("Identifier Found: %s\n", token);
    }

    return 0;
}