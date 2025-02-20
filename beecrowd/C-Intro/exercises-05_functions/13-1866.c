#include <stdio.h>
void ans() {
    int n;
    scanf("%d", &n);
    printf("%d\n", n%2);
}
int main() {
    int x;
    scanf("%d", &x);
    while(x--) ans();
    return 0;
}