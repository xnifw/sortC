#include <stdio.h>

int main(void) {
    int valuesToSort[] = {5, 2, 9, 1, 3};
    int totalValues = sizeof(valuesToSort) / sizeof(valuesToSort[0]);

    for (int sortPass = 0; sortPass < totalValues - 1; sortPass++) {
        for (int comparePosition = 0; comparePosition < totalValues - sortPass - 1; comparePosition++) {
            if (valuesToSort[comparePosition] > valuesToSort[comparePosition + 1]) {
                int valueBeingMoved = valuesToSort[comparePosition];
                valuesToSort[comparePosition] = valuesToSort[comparePosition + 1];
                valuesToSort[comparePosition + 1] = valueBeingMoved;
            }
        }
    }

    for (int printPosition = 0; printPosition < totalValues; printPosition++) {
        printf("%d ", valuesToSort[printPosition]);
    }
    printf("\n");

    return 0;
}

