#include "BowlingGame.h"

BowlingGame::BowlingGame(const std::vector<int>& rolls) : m_rolls(rolls) {}

int BowlingGame::calculateScore() {
    int score = ZERO;
    int rollIndex = ZERO;

    for (int frame = ZERO; frame < MAX_FRAMES; ++frame) {
        if (isStrike(rollIndex)) {
            score += MAX_PINS + strikeBonus(rollIndex);
            rollIndex += ONE;
        } else if (isSpare(rollIndex)) {
            score += MAX_PINS + spareBonus(rollIndex);
            rollIndex += TWO;
        } else {
            score += sumOfBallsInFrame(rollIndex);
            rollIndex += TWO;
        }
    }

    return score;
}

bool BowlingGame::isStrike(int rollIndex) {
    return m_rolls[rollIndex] == MAX_PINS;
}

bool BowlingGame::isSpare(int rollIndex) {
    return m_rolls[rollIndex] + m_rolls[rollIndex + ONE] == MAX_PINS;
}

int BowlingGame::strikeBonus(int rollIndex) {
    return m_rolls[rollIndex + ONE] + m_rolls[rollIndex + TWO];
}

int BowlingGame::spareBonus(int rollIndex) {
    return m_rolls[rollIndex + TWO];
}

int BowlingGame::sumOfBallsInFrame(int rollIndex) {
    return m_rolls[rollIndex] + m_rolls[rollIndex + ONE];
}
