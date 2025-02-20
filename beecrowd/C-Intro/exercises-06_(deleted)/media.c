#include <stdio.h>

int pos, neg, posC, negC, t;

void read() {
    int n; scanf("%d", &n);
    if(n<0) { neg += n; negC++; }
    else { pos += n; posC++; }
}

void avg() {
    printf("%.1f\n", (float) pos/posC);
    printf("%.1f\n", (float) neg/negC);

}
void percent(){ 
    printf("%.1f\n", (posC * 100.0)/t);
    printf("%.1f\n", (negC * 100.0)/t);
}

int main() {
    scanf("%d", &t);
    int loop = t;
    while(loop--) 
        read();
    avg();
    percent();
    return 0;
}