#include <stdio.h>

int main(void) {
    int scores[] = {5, 2, 9, 1, 3};
    int scoreCount = sizeof(scores) / sizeof(scores[0]);

    for (int round = 0; round < scoreCount - 1; round++) {
        for (int leftPosition = 0; leftPosition < scoreCount - round - 1; leftPosition++) {
            if (scores[leftPosition] > scores[leftPosition + 1]) {
                int scoreToMove = scores[leftPosition];
                scores[leftPosition] = scores[leftPosition + 1];
                scores[leftPosition + 1] = scoreToMove;
            }
        }
    }

    for (int printPosition = 0; printPosition < scoreCount; printPosition++) {
        printf("%d ", scores[printPosition]);
    }
    printf("\n");

    return 0;
}

