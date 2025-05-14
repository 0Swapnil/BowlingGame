#include "../include/BowlingGame.h"

BowlingGame::BowlingGame(const std::vector<int>& rolls) : m_rolls(rolls) {}

int BowlingGame::calculateScore() {
    int score = 0;
    int rollIndex = 0;

    for (int frame = 0; frame < 10; ++frame) {
        if (frame == 9) {
            score += m_rolls[rollIndex] + m_rolls[rollIndex + 1];
            if (isStrike(rollIndex) || isSpare(rollIndex)) {
                score += m_rolls[rollIndex + 2]; 
            }
            break;
        }

        if (isStrike(rollIndex)) {
            score += 10 + strikeBonus(rollIndex);
            rollIndex += 1;
        }
        else if (isSpare(rollIndex)) {
            score += 10 + spareBonus(rollIndex);
            rollIndex += 2;
        }
        else {
            score += sumOfBallsInFrame(rollIndex);
            rollIndex += 2;
        }
    }

    return score;
}

bool BowlingGame::isStrike(int rollIndex) {
    return m_rolls[rollIndex] == 10;
}

bool BowlingGame::isSpare(int rollIndex) {
    return m_rolls[rollIndex] + m_rolls[rollIndex + 1] == 10;
}

int BowlingGame::strikeBonus(int rollIndex) {
    return m_rolls[rollIndex + 1] + m_rolls[rollIndex + 2];
}

int BowlingGame::spareBonus(int rollIndex) {
    return m_rolls[rollIndex + 2];
}

int BowlingGame::sumOfBallsInFrame(int rollIndex) {
    return m_rolls[rollIndex] + m_rolls[rollIndex + 1];
}
