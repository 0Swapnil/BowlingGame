#ifndef BOWLING_GAME_H
#define BOWLING_GAME_H

#include <vector>

class BowlingGame {
public:
    BowlingGame(const std::vector<int>& rolls);
    int calculateScore();

private:
    std::vector<int> m_rolls;

    bool isStrike(int rollIndex);
    bool isSpare(int rollIndex);
    int strikeBonus(int rollIndex);
    int spareBonus(int rollIndex);
    int sumOfBallsInFrame(int rollIndex);
};

#endif
