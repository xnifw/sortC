#include <stdio.h>

int main(void) {
    int items[] = {5, 2, 9, 1, 3};
    int itemCount = sizeof(items) / sizeof(items[0]);

    for (int scanRound = 0; scanRound < itemCount - 1; scanRound++) {
        for (int leftIndex = 0; leftIndex < itemCount - scanRound - 1; leftIndex++) {
            if (items[leftIndex] > items[leftIndex + 1]) {
                int leftValue = items[leftIndex];
                items[leftIndex] = items[leftIndex + 1];
                items[leftIndex + 1] = leftValue;
            }
        }
    }

    for (int outputIndex = 0; outputIndex < itemCount; outputIndex++) {
        printf("%d ", items[outputIndex]);
    }
    printf("\n");

    return 0;
}

