#include <iostream>
#include "BowlingGame.h"

int main() {
    std::vector<int> rolls = {1,4, 4,5, 6,4, 5,5, 10, 0,1, 7,2, 6,4, 10, 2,6};
    BowlingGame game(rolls);
    std::cout << "Total Score: " << game.calculateScore() << std::endl;
    return 0;
}
