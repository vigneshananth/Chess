// This file provides a generic implementation for the generic Chess Board. 
//// ----------------------------------------------------------------------*80*

#include <iostream>
#include "common.h"
#include "Location.h"
#include "Piece.h"
#include "Pawn.h"
#include "Rook.h"
#include "Knight.h"
#include "Queen.h"
#include "Bishop.h"
#include "King.h"
#include "ChessSet.h"
#include "Board.h"
using namespace std;

Board::Board() { 
  length = 8;
  
  uint8_t i,j;

  for(i = 0; i < length; i++) {
    grid[i] = (uint8_t *)malloc(sizeof(uint8_t) * length);    
  }

  for(i = 0; i < length; i++) {
    for(j = 0; j < length; j++) {
      grid[i][j] = 0;
    }
  }

  set[0].setPieceLocatons(WHITE,grid);
  


  set[1].setPieceLocatons(BLACK,grid);
 
}