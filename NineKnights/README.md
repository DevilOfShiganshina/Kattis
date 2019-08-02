# Nine Knights

In the game of chess, knights are unique due to their “L-shaped” movement. A knight can move, as shown in\
Figure 1, by either moving two squares sideways and one square up or down, or moving one square sideways and\
two squares either up or down.

![alt text](https://open.kattis.com/problems/nineknights/file/statement/en/img-0001.png)

**Figure 1**: The highlighted squares show all possible moves for a knight.

In the Nine Knights puzzle, exactly nine knights must be positioned on a 5-by-5 board so that no knight can attack\
another knight with a single move. The configuration shown in Figure 2 is an invalid solution because two of the\
knights can attack each other, where the configuration shown in Figure 3 is a valid solution.

![alt text](https://open.kattis.com/problems/nineknights/file/statement/en/img-0002.png)

**Figure 2**: Invalid game configuration

![alt text](https://open.kattis.com/problems/nineknights/file/statement/en/img-0003.png)

**Figure 3**: Valid game configuration

Given the description of a game configuration, your job is to determine whether or not it represents a valid solution\
to the Nine Knights puzzle.

## Input

The input will consist of 5 lines, each having 5 characters. All characters will be either ’k’, indicating the placement\
of a knight, or ’.’, indicating an empty space on the board.

## Output

Display the word valid if the given chess board is a valid solution to the Nine Knights puzzle. Otherwise, display\
the word invalid.

| Sample Input | Sample Output |
| ---          | ---           |
| ...k.        | invalid       |
| ...k.        |               |
| k.k..        |               |
| .k.k.        |               |
| k.k.k        |               |
|              |               |
| .....        | valid         |
| ...k.        |               |
| k.k.k        |               |
| .k.k.        |               |
| k.k.k        |               |
|              |               |
| .....        | invalid       |
| ...k.        |               |
| k.k.k        |               |
| .k.k.        |               |
| k...k        |               |