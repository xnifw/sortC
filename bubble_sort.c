#include <stdio.h>

int main(void) {
    int sampleNumbers[] = {5, 2, 9, 1, 3};
    int numberCount = sizeof(sampleNumbers) / sizeof(sampleNumbers[0]);

    for (int passIndex = 0; passIndex < numberCount - 1; passIndex++) {
        for (int compareIndex = 0; compareIndex < numberCount - passIndex - 1; compareIndex++) {
            if (sampleNumbers[compareIndex] > sampleNumbers[compareIndex + 1]) {
                int temporaryNumber = sampleNumbers[compareIndex];
                sampleNumbers[compareIndex] = sampleNumbers[compareIndex + 1];
                sampleNumbers[compareIndex + 1] = temporaryNumber;
            }
        }
    }

    for (int outputIndex = 0; outputIndex < numberCount; outputIndex++) {
        printf("%d ", sampleNumbers[outputIndex]);
    }
    printf("\n");

    return 0;
}

