#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", max(a, max(b, c)));
    return 0;
}