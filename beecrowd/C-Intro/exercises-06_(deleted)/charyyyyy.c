#include <stdio.h>
#include <ctype.h>

int main() {
    char c; scanf("%c", &c);
    if (isdigit(c)) printf("o caractere %c e um numero inteiro.\n", c);
    else if (isalpha(c)){ c = tolower(c); printf("o caractere %c e uma letra.\n", c); }
    else printf("o caractere %c nao e um numero inteiro nem uma letra.\n", c);
    return 0;
}




