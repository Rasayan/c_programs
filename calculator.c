#include <stdio.h>

int main() {
    int num1, num2, choice;
    float result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: result = num1 + num2; break;
        case 2: result = num1 - num2; break;
        case 3: result = num1 * num2; break;
        case 4: result = (float)num1 / num2; break;
        default: printf("Invalid choice\n"); return 1;
    }

    printf("Result: %.2f\n", result);
    return 0;
}
