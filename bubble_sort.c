#include <stdio.h>

int main(void) {
    int data[] = {5, 2, 9, 1, 3};
    int dataSize = sizeof(data) / sizeof(data[0]);

    for (int passNumber = 0; passNumber < dataSize - 1; passNumber++) {
        for (int currentIndex = 0; currentIndex < dataSize - passNumber - 1; currentIndex++) {
            if (data[currentIndex] > data[currentIndex + 1]) {
                int savedValue = data[currentIndex];
                data[currentIndex] = data[currentIndex + 1];
                data[currentIndex + 1] = savedValue;
            }
        }
    }

    for (int currentIndex = 0; currentIndex < dataSize; currentIndex++) {
        printf("%d ", data[currentIndex]);
    }
    printf("\n");

    return 0;
}

