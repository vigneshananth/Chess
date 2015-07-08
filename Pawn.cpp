// This file provides an implementation for the standard Chess pawn. 
//// ----------------------------------------------------------------------*80*1
// TODO's: update first move -critical. 
#include <iostream>
#include "common.h"
#include "Location.h"
#include "Piece.h" 
#include "Pawn.h"
using namespace std;

Pawn::Pawn() : Piece (PAWN,TRUE,WHITE,new pieceLocation(0,0)){
  firstMove = TRUE;
}

boolean Pawn::isMoveValid(pieceLocation dest, 
                          int boardLength, 
                          PieceColor pieceAtDestColor) {

  if(!isLocationValid(boardLength,dest)) {
    cout << "Destination is not within limits of board";
    return FALSE;
  }

  if(areLocationsSame(dest,locationOnBoard)) {
    cout << "Destination can't be same as current location";
    FALSE;
  }

  if(pieceAtDestColor == color) {
    cout << "Piece of same color at location";
    return FALSE;
  }

  // If the pawn is capturing a piece, it can move diagonally.
  if(pieceAtDestColor != EMPTY &&
     pieceAtDestColor != color) {



    // The following code needs to be in a function called after isMoveValid.

    // Board.removePiece(dest);
    // locationOnBoard.setPieceLocation(dest);
    // // I'm unclear what parameters this function would take. Basically,
    // // the board class needs to update it's view of the world.
    // Board.updateBoard();

    return TRUE;

  } else {

    if(dest.getXValue() != locationOnBoard.getXValue()) {
      cout << "Pawns can only move on one axis unless capturing a piece";
      return FALSE;
    }

    int maxAllowed = 1;
    if(firstMove)
      maxAllowed = 2;

    if((color == WHITE && dest.getYValue() <= (locationOnBoard.getYValue() + maxAllowed)) ||
       (color == BLACK && dest.getYValue() >= (locationOnBoard.getYValue() - maxAllowed))){
      //need to write pawn promotion code
      firstMove = FALSE;
      return TRUE;
    }

    cout << "Invalid pawn move";
    return FALSE;

  }
}

int main(void)
{
  return 0;
}
