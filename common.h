// This file provides defintions for commonly used data types.
//// ----------------------------------------------------------------------*80*

#ifndef COMMON_H
#define COMMON_H

//Why are these things not in C++? What am I missing?
typedef int boolean;
#define TRUE 1
#define FALSE 0 

// We assume a square board.
#define BOARD_LENGTH 8

enum PieceType {
  PAWN   = 0,
  KNIGHT = 1,
  BISHOP = 2,
  ROOK   = 3,
  QUEEN  = 4,
  KING   = 5
};

enum PieceActivity {
  ON_BOARD  = 0,
  OFF_BOARD = 1,
};

enum PieceColor {
  WHITE = 0,
  BLACK = 1,
  EMPTY = 2,
};


#endif //COMMON_H