#include <stdio.h>
#include<string.h>

void swap(void *a, void *b, size_t size) {
    char temp[size];
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
}

int main() {
    int a = 5, b = 10;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After swapping: a = %d, b = %d\n", a, b);

    float x = 3.14, y = 2.71;
    printf("Before swapping: x = %f, y = %f\n", x, y);
    swap(&x, &y, sizeof(float));
    printf("After swapping: x = %f, y = %f\n", x, y);

    char c1 = 'A', c2 = 'B';
    printf("Before swapping: c1 = %c, c2 = %c\n", c1, c2);
    swap(&c1, &c2, sizeof(char));
    printf("After swapping: c1 = %c, c2 = %c\n", c1, c2);

    return 0;
}
