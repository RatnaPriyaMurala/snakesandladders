#include <stdio.h>

void printFibonacci(int n) {
    int prev = 0;
    int curr = 1;

    printf("Fibonacci Series up to %d terms:\n", n);
    printf("%d, %d", prev, curr);

    for (int i = 3; i <= n; i++) {
        int next = prev + curr;
        printf(", %d", next);
        prev = curr;
        curr = next;
    }

    printf("\n");
}

int main() {
    int num;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printFibonacci(num);

    return 0;
}
