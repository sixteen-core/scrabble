#include <stdio.h>
#include "libcs50/src/cs50.h"

int returnScoreFormLetter(char letter) {
    int scrabblePoints[26] = {
        1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10
    };
    const int score = scrabblePoints[letter - 'a'];
    return score;
}

int returnWordScore(string word) {
    int totalScore = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        int letterScore = returnScoreFormLetter(word[i]);
        totalScore += letterScore;

    }
    return totalScore;
}

int main(void) {

    string playerOneWord = get_string("Player 1: ");
    string playerTwoWord = get_string("Player 2: ");

    int playerOneScore = returnWordScore(playerOneWord);
    int playerTwoScore = returnWordScore(playerTwoWord);

    printf("Score player one: %i!\n", playerOneScore);
    printf("Score player two: %i!\n", playerTwoScore);

    if (playerOneScore > playerTwoScore) {
        printf("Player 1 wins!\n");
        return 0;
    }

    if (playerOneScore < playerTwoScore) {
        printf("Player 2 wins!\n");

        return 0;
    }

    printf("Tie!\n");

}
