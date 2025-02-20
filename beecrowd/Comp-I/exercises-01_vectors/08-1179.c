#include <stdio.h>

#define MAX 5

void show(int array[], int size, int which) {
    for(int i = 0; i < size; i++) {
        printf(which? "impar": "par");
        printf("[%d] = %d\n", i, array[i]);
    }
}

void fill(int even[], int odd[]) {
    int evenCount = 0, oddCount = 0, quotes = 15;
    while(quotes--) {
        int q;
        scanf("%d", &q);
        if(q%2) {
            odd[oddCount] = q;
            oddCount++;
        } else {
            even[evenCount] = q;
            evenCount++;
        }
        if (oddCount == MAX) {
            show(odd, MAX, 1);
            oddCount = 0;
        }
        if (evenCount == MAX) {
            show(even, MAX, 0);
            evenCount = 0;
        }
    }
    show(odd, oddCount, 1);
    show(even, evenCount, 0);
}

int main() {
    int even[MAX], odd[MAX];
    fill(even, odd);
    return 0;
}