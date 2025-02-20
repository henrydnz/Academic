#include <stdio.h>
#include <stdlib.h> 

void ans() {
    int x, sum=0; 
    scanf("%d", &x);
    for(int i=1;i<=abs(x)/2;i++) if(!(x%i)) sum+=i;
    if(sum!=x) printf("naum ");
    printf("eh perfeito\n");
}

int main() {
    ans();
    return 0;
}