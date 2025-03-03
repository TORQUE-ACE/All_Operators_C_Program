#include <stdio.h>

int main() {
    int main_choice, sub_choice, a, b, result;
    float x, y;
    printf("Select an operator category:\n");
    printf("1. Arithmetic Operators\n");
    printf("2. Relational Operators\n");
    printf("3. Logical Operators\n");
    printf("4. Bitwise Operators\n");
    printf("5. Assignment Operators\n");
    printf("6. Increment & Decrement Operators\n");
    printf("7. Ternary Operator\n");
    printf("Enter your choice: ");
    scanf("%d", &main_choice);

    switch (main_choice) {
        case 1:
            printf("\nSelect an arithmetic operation:\n");
            printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n");
            printf("Enter your choice: ");
            scanf("%d", &sub_choice);
            printf("Enter first integer: ");
            scanf("%d", &a);
            printf("Enter second integer: ");
            scanf("%d", &b);
            switch (sub_choice) {
                case 1: printf("Result: %d\n", a + b); break;
                case 2: printf("Result: %d\n", a - b); break;
                case 3: printf("Result: %d\n", a * b); break;
                case 4: printf("Result: %d\n", a / b); break;
                case 5: printf("Result: %d\n", a % b); break;
                default: printf("Invalid choice!\n");
            }
            break;
        case 2:
            printf("\nRelational Operators (Comparing two integers):\n");
            printf("Enter first integer: ");
            scanf("%d", &a);
            printf("Enter second integer: ");
            scanf("%d", &b);
            printf("a == b: %d\n", a == b);
            printf("a != b: %d\n", a != b);
            printf("a > b: %d\n", a > b);
            printf("a < b: %d\n", a < b);
            printf("a >= b: %d\n", a >= b);
            printf("a <= b: %d\n", a <= b);
            break;
        case 3:
            printf("\nLogical Operators:\n");
            printf("Enter first integer: ");
            scanf("%d", &a);
            printf("Enter second integer: ");
            scanf("%d", &b);
            printf("(a > 0 && b > 0): %d\n", (a > 0 && b > 0));
            printf("(a > 0 || b < 0): %d\n", (a > 0 || b < 0));
            printf("!(a == b): %d\n", !(a == b));
            break;
        case 4:
            printf("\nBitwise Operators:\n");
            printf("Enter first integer: ");
            scanf("%d", &a);
            printf("Enter second integer: ");
            scanf("%d", &b);
            printf("a & b = %d\n", a & b);
            printf("a | b = %d\n", a | b);
            printf("a ^ b = %d\n", a ^ b);
            printf("~a = %d\n", ~a);
            printf("a << 1 = %d\n", a << 1);
            printf("a >> 1 = %d\n", a >> 1);
            break;
        case 5:
            printf("\nAssignment Operators:\n");
            printf("Enter an integer: ");
            scanf("%d", &a);
            result = a;
            result += 10;
            printf("result += 10: %d\n", result);
            result -= 5;
            printf("result -= 5: %d\n", result);
            result *= 2;
            printf("result *= 2: %d\n", result);
            result /= 3;
            printf("result /= 3: %d\n", result);
            break;
        case 6:
            printf("\nIncrement & Decrement Operators:\n");
            printf("Enter an integer: ");
            scanf("%d", &a);
            printf("Pre-increment: ++a = %d\n", ++a);
            printf("Post-increment: a++ = %d\n", a++);
            printf("After post-increment: a = %d\n", a);
            printf("Pre-decrement: --a = %d\n", --a);
            printf("Post-decrement: a-- = %d\n", a--);
            printf("After post-decrement: a = %d\n", a);
            break;
        case 7:
            printf("\nTernary Operator:\n");
            printf("Enter first integer: ");
            scanf("%d", &a);
            printf("Enter second integer: ");
            scanf("%d", &b);
            printf("(a > b) ? a : b = %d\n", (a > b) ? a : b);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

