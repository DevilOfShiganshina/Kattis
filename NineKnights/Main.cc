#include <iostream>

bool is_legal(short row, short col) {
  return (row >= 0 && row < 5 && col >= 0 && col < 5);
}

bool is_valid(char board[5][5]) {
  short moveSetRow[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
  short moveSetCol[] = { 1, 2, 2, 1, -1, -2, -2, -1 };

  for (short i = 0; i < 5; i++) {
    for (short j = 0; j < 5; j++) {
      if (board[i][j] == 'k') {
        for (short k = 0; k < 8; k++) {
          if (is_legal(i + moveSetRow[k], j + moveSetCol[k])) {
            if (board[i + moveSetRow[k]][j + moveSetCol[k]] == 'k') {
              return false;
            }
          }
        }
      }
    }
  }

  return true;
}

int main() {
  char board[5][5];
  short knight_count = 0;

  for (short i = 0; i < 5; i++) {
    for (short j = 0; j < 5; j++) {
      std::cin >> board[i][j];
      if (board[i][j] == 'k') { knight_count++; }
    }
  }

  if (knight_count != 9) {
    std::cout << "invalid" << std::endl;
  } else {
    if (is_valid(board)) {
      std::cout << "valid" << std::endl;
    } else {
      std::cout << "invalid" << std::endl;
    }
  }

  return 0;
}
