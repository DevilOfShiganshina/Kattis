# Dice Game

Gunnar and Emma play a lot of board games at home, so they own\
many dice that are not normal 6-sided dice. For example they own a\
die that has 10 sides with numbers 47, 48, …, 56 on it.

There has been a big storm in Stockholm, so Gunnar and Emma have\
been stuck at home without electricity for a couple of hours. They\
have finished playing all the games they have, so they came up with a\
new one. Each player has 2 dice which he or she rolls. The player with\
a bigger sum wins. If both sums are the same, the game ends in a tie.

## Task

Given the description of Gunnar’s and Emma’s dice, which player has higher chances of winning?

All of their dice have the following property: each die contains numbers *a*, *a* + 1, …, *b*, where *a* and *b* are the\
lowest and highest numbers respectively on the die. Each number appears exactly on one side, so the die has\
*b* − *a* + 1 sides.

## Input

The first line contains four integers *a*<sub>1</sub>, *b*<sub>1</sub>, *a*<sub>2</sub>, *b*<sub>2</sub> that describe Gunnar’s dice. Die number *i* contains numbers\
*a*<sub>i</sub>, *a*<sub>i</sub>+1, …, *b*<sub>i</sub> on its sides. You may assume that 1 ≤ *a*<sub>i</sub> ≤ *b*<sub>i</sub> ≤ 100. You can further assume that each die has\
at least four sides, so *a*<sub>i</sub> + 3 ≤ *b*<sub>i</sub>.

The second line contains the description of Emma’s dice in the same format.

## Output

Output the name of the player that has higher probability of winning. Output “Tie” if both players have same\
probability of winning.

| Sample Input | Sample Output |
| ---          | ---           |
| 1 4 1 4      | Emma          |
| 1 6 1 6      |               |
|              |               |
| 1 8 1 8      | Tie           |
| 1 10 2 5     |               |
|              |               |
| 2 5 2 7      | Gunnar        |
| 1 5 2 5      |               |