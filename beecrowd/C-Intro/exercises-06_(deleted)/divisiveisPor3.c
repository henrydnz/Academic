#include <stdio.h>

int ans() {
    int n,x=0, count=0;
    while(count!=15&&scanf("%d", &n)) 
        if(n%3==0) { 
            x+=n; 
            count++; 
        }
    return x;
}

int main() {
    printf("o resultado da soma dos 15 numeros divisiveis por 3 e: %d\n", ans());
    return 0;
}