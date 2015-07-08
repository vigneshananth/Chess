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

