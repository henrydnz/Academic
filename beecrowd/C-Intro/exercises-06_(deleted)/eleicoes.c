#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    if(a>=500)printf("pandemilson\n");
    else if(b>=500)printf("alcoolgelson\n");
    else if(c>=500)printf("lockdalson\n");
    else printf("segundo turno\n");
    return 0;
}