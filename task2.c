#include <stdio.h>

void generate_sequence(int a, int d, int b) {
    if (d == 0) {
        printf("Error: Common difference cannot be zero.\n");
        return;
    }
    
    int sum_even = 0;
    printf("Sequence: ");
    for (int i = a; i <= b; i += d) {
        printf("%d ", i);
        if (i % 2 == 0) {
            sum_even += i;
        }
    }
    printf("\n");
    printf("Sum of even numbers: %d\n", sum_even);
}

int main() {
    int a, d, b;
    printf("Enter the starting number (a): ");
    scanf("%d", &a);
    printf("Enter the common difference (d): ");
    scanf("%d", &d);
    printf("Enter the upper limit (b): ");
    scanf("%d", &b);
    
    generate_sequence(a, d, b);
    
    return 0;
}
