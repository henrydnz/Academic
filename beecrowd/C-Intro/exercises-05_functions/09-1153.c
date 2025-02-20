#include <stdio.h>

int fat(int x) {
    for (int i = x-1; i > 0; i--) x *= i;
    return x;
}

int main() {
    int x;
    scanf("%d", &x);
    printf("%d\n", fat(x));
    return 0;
}