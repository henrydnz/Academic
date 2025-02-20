#include <stdio.h>

int main() {
    char c; int w=0;
    for(int i=0;i<12;i++) {
        scanf("%c", &c);
        if(c=='V') w++;
    }
    printf("%d\n", w==5||w==6?1:w==3||w==4?2:w?3:-1);
}