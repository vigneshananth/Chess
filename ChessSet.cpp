//This file provides a classical chess set implementation.
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
using namespace std;

ChessSet::ChessSet() {
  ChessSet(WHITE);
}

ChessSet::ChessSet(PieceColor color) {
  color = color;
  int i,pawnOffset = 0, pieceOffset = 0;
  if(color == WHITE) {
    pawnOffset = 1;
    pieceOffset = 0;
  } else if(color == BLACK) {
    pawnOffset = 6;
    pieceOffset = 7;
  } else {
    cout << "INCORRECT COLOR. Asserting";

  }
  
  for(i=0;i<8;i++){
    pawns[i].setPieceLocation(new pieceLocation(pawnOffset,i));
  }

  rooks[0].setPieceLocation(new pieceLocation(pieceOffset,0));
  rooks[1].setPieceLocation(new pieceLocation(pieceOffset,7));

  knights[0].setPieceLocation(new pieceLocation(pieceOffset,1));
  knights[1].setPieceLocation(new pieceLocation(pieceOffset,6));

  bishops[0].setPieceLocation(new pieceLocation(pieceOffset,2));
  bishops[1].setPieceLocation(new pieceLocation(pieceOffset,5));

  queen.setPieceLocation(new pieceLocation(pieceOffset,3));

  king.setPieceLocation(new pieceLocation(pieceOffset,4));
}

void ChessSet::setPieceLocatons(PieceColor color, uint8_t **grid) {
  color = color;
  int i;
  int pawnOffset = 0, pieceOffset = 0;

  if(color == WHITE) {
    pawnOffset = 1;
    pieceOffset = 0;
  } else if(color == BLACK) {
    pawnOffset = 6;
    pieceOffset = 7;

  } else {
    cout << "INCORRECT COLOR. Asserting";

  }

  for(i=0;i<8;i++){
    pawns[i].setPieceLocation(new pieceLocation(pawnOffset,i));
    grid[pawnOffset][i] = (color << 7) | (PAWN << 4)| i;
  }

  rooks[0].setPieceLocation(new pieceLocation(pieceOffset,0));
  grid[pieceOffset][0] = (color << 7) | (ROOK << 4) | 0;
  rooks[1].setPieceLocation(new pieceLocation(pieceOffset,7));
  grid[pieceOffset][7] = (color << 7) | (ROOK << 4) | 1;

  knights[0].setPieceLocation(new pieceLocation(pieceOffset,1));
  grid[pieceOffset][1] = (color << 7) | (KNIGHT << 4) | 0;
  knights[1].setPieceLocation(new pieceLocation(pieceOffset,6));
  grid[pieceOffset][6] = (color << 7) | (KNIGHT << 4) | 1;

  bishops[0].setPieceLocation(new pieceLocation(pieceOffset,2));
  grid[pieceOffset][2] = (color << 7) | (BISHOP << 4) | 0;
  bishops[1].setPieceLocation(new pieceLocation(pieceOffset,5));
  grid[pieceOffset][5] = (color << 7) | (BISHOP << 4) | 1;

  queen.setPieceLocation(new pieceLocation(pieceOffset,3));
  grid[pieceOffset][3] = (color << 7) | (QUEEN << 4) | 0;

  king.setPieceLocation(new pieceLocation(pieceOffset,4));
  grid[pieceOffset][3] = (color << 7) | (KING << 4) | 0;

}
