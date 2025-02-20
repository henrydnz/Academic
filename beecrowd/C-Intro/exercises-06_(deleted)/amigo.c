#include <stdio.h>

void amigos(int x, int y) {
    printf("#amigo (%d, %d) = ", x, y);
    
    int sum=0;
    for(int i=1;i<x;i++)
        if(!(x%i)) sum+=i;
    
    printf("%d\n", sum==y);
}

int main() { 
    int x, y;
    while( scanf("%d%d", &x, &y) && (x>0&&y>0)) amigos(x,y);
    return 0;
}