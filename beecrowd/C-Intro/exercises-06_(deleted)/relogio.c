#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if(b>3*a||c<95)printf("diminuir\n");
    else if(b<2*a&&c>97)printf("aumentar\n");
    else printf("manter\n");
    return 0;
}