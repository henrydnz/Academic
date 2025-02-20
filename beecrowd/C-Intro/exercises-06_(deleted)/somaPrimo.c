#include <stdio.h>

int primo(int x) {
    if (x==1) return 1;
    if (x==2) return 1;
    for(int i=2;i<x;i++) if(!(x%i)) return 0;
    return 1;
}

void ans() {
    int a, b, ma, mi, sum=0;
    scanf("%d%d", &a, &b);
    b>a? (ma=b,mi=a): (ma=a,mi=b) ;
    for(int i=mi;i<=ma;i++)
        if(primo(i)) 
            sum+=i;
    printf("#sprimos (%d, %d) = %d\n", a, b, sum);
}

int main() {
    int t; scanf("%d", &t);
    while(t--) ans();
    return 0;
}

