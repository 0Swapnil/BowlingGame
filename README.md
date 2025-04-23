# BowlingGame
# Bowling Game Score Calculator
 
This project implements a program to calculate the score of a single player in a 10-frame Bowling game.
 
## Problem Statement
In a bowling game, there are 10 turns (called frames). In each frame, the player gets two chances to knock down 10 pins. Some special rules apply for strikes and spares:

Strike: Knock down all 10 pins on the first try. Bonus = next two rolls.

Spare: Knock down all 10 pins in two tries. Bonus = next one roll.

In the 10th frame, if the player gets a strike or spare, they get extra rolls.

The goal is to calculate the total score for a game based on the list of rolls.

ex:
[1, 4, 4, 5, 6, 4, 5, 5, 10, 0, 1, 7, 3, 6, 4, 10, 2, 6]

We can break it down frame by frame.
Frame 1: Rolls 1 and 4 → 1 + 4 = 5 points.
Frame 2: Rolls 4 and 5 → 4 + 5 = 9 points.
Frame 3: Rolls 6 and 4 → 6 + 4 = 10 points.
Frame 4: Rolls 5 and 5 → 5 + 5 = 10 points (Spare). The bonus will be the next roll (which is 10).
Frame 5: Roll 10 (Strike). The bonus will be the next two rolls (0 + 1 = 1).
Frame 6: Rolls 0 and 1 → 0 + 1 = 1 point (used as a bonus for the spare in frame 4).
Frame 7: Rolls 7 and 3 → 7 + 3 = 10 points (Spare). The bonus will be the next roll (which is 6).
Frame 8: Rolls 6 and 4 → 6 + 4 = 10 points (used as a bonus for the spare in frame 7).
Frame 9: Roll 10 (Strike). The bonus will be the next two rolls (2 + 6 = 8).
Frame 10: Rolls 2 and 6 → 2 + 6 = 8 points (no bonus because it's the last frame).


Calculate the total score:

Frame 1: 5
Frame 2: 9
Frame 3: 10
Frame 4: 10 + 10 (bonus) = 20
Frame 5: 10 + 1 (bonus) = 11
Frame 6: 1 (no bonus)
Frame 7: 10 + 6 (bonus) = 16
Frame 8: 10 (no bonus)
Frame 9: 10 + 8 (bonus) = 18
Frame 10: 8 (no bonus)

Total score:
5 + 9 + 10 + 20 + 11 + 1 + 16 + 10 + 18 + 8 = 108