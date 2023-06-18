#include <stdio.h>

int findGreatest(int num1, int num2, int num3) {
    int greatest = num1;

    if (num2 > greatest) {
        greatest = num2;
    }
    if (num3 > greatest) {
        greatest = num3;
    }

    return greatest;
}

int main() {
    int num1, num2, num3, greatest;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    greatest = findGreatest(num1, num2, num3);

    printf("The greatest number is: %d\n", greatest);

    return 0;
}
