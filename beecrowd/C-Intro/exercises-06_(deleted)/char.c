#include <stdio.h>
#include <ctype.h>

int main() {
    char c; scanf("%c", &c);
    printf("Eh uma letra? %d", isalpha(c)?1:0);
    return 0;
}