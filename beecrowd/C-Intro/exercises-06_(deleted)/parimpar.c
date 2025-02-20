#include <stdio.h>

int suma, sumb;

int main() {
    int x;
    while(scanf("%d", &x)&&x>=0) 
        if(x%2)suma+=x;
        else sumb+=x;
    printf("%d\n%d\n",sumb,suma);
    return 0;
}


