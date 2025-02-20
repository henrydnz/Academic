#include <stdio.h>

int main() {
    int x;
    while( scanf("%d", &x) && x>=1600){
        if( (!(x%4) && (x%100)) || (!(x%100) && !(x%400)))
            printf("366\n");
        else 
            printf("365\n");
    }
    return 0;
}