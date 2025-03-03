#include <stdio.h>

int main() {
    int age;
    char citizenship;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Are you a citizen? (y/n): ");
    scanf(" %c", &citizenship);
    if (age >= 18) {
        if (citizenship == 'y' || citizenship == 'Y') {
            printf("You are eligible to vote.\n");
        } else {
            printf("You are not eligible to vote because you are not a citizen.\n");
        }
    } else {
        printf("You are not eligible to vote because you are under 18.\n");
    }

    return 0;
}
