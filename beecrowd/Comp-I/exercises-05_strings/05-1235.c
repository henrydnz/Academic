#include <stdio.h>
#include <string.h>

void split(char *src, char *dst1, char *dst2) {
    int src_half_len = strlen(src) / 2;
    //ponteiro pro meio, pro loop n ficar infinito
    char *ptr_half_len = src + src_half_len;    
    //dst1 recebe primeira metade, dst2 rewecbe segunda metade
    while (src < ptr_half_len) {
        *dst1 = *src;
        *dst2 = *(src + src_half_len);
        dst1++;
        dst2++;
        src++;
    }
    *dst1 = '\0'; // terminador
    *dst2 = '\0'; // terminador
}

void invert(char *src) {
    int src_len = strlen(src);
    char *start = src;
    char *end = src + src_len - 1;

    //inverte source
    while (start < end) {
        char aux = *start;
        *start = *end;
        *end = aux;
        start++;
        end--;
    }
}

void virus(char *str) {
    //divide string em dois, inverte cada um e concatena
    char str1[51], str2[51];
    split(str, str1, str2);
    invert(str1);
    invert(str2);
    strcpy(str, strcat(str1, str2));
}

int main() {    
    int tests;
    scanf("%d%*c", &tests);
    while (tests--) {
        char str[101];
        scanf("%[^\n]%*c", str);
        virus(str); 
        printf("%s\n", str);
    }    
    return 0;
}