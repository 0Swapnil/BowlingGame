#ifndef BOWLING_GAME_H
#define BOWLING_GAME_H

#include <vector>

class BowlingGame {
public:
    BowlingGame(const std::vector<int>& rolls);
    int calculateScore();

private:
    std::vector<int> m_rolls;

    static constexpr int ZERO = 0;
    static constexpr int ONE = 1;
    static constexpr int TWO = 2;
    static constexpr int MAX_PINS = 10;
    static constexpr int MAX_FRAMES = 10;

    bool isStrike(int rollIndex);
    bool isSpare(int rollIndex);
    int strikeBonus(int rollIndex);
    int spareBonus(int rollIndex);
    int sumOfBallsInFrame(int rollIndex);
};

#endif
