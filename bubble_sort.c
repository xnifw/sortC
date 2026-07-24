#include <stdio.h>

int main(void) {
    int numbers[] = {5, 2, 9, 1, 3};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    for (int pass = 0; pass < length - 1; pass++) {
        for (int index = 0; index < length - pass - 1; index++) {
            if (numbers[index] > numbers[index + 1]) {
                int temporary = numbers[index];
                numbers[index] = numbers[index + 1];
                numbers[index + 1] = temporary;
            }
        }
    }

    for (int index = 0; index < length; index++) {
        printf("%d ", numbers[index]);
    }
    printf("\n");

    return 0;
}

