// This file provides an implementation for the standard Chess King. 
//// ----------------------------------------------------------------------*80*

#include <iostream>
#include "common.h"
#include "Location.h"
#include "Piece.h"
#include "King.h"
using namespace std;

boolean King::isMoveValid(pieceLocation dest,
                          int boardLength,
                          PieceColor pieceAtDestColor) {

  if(!isLocationValid(boardLength,dest)) {
    cout << "Destination is not within limits of board";
    return FALSE;
  }

  if(areLocationsSame(dest,locationOnBoard)) {
    cout << "Destination can't be same as current location";
  }

  if(pieceAtDestColor == color) {
    cout << "Piece of same color at location";
    return FALSE;
  }

  int deltaX = abs(dest.getXValue() - locationOnBoard.getXValue());
  int deltaY = abs(dest.getYValue() - locationOnBoard.getYValue());

  if((deltaX <= (boardLength - 1)) && 
     (deltaY <= (boardLength - 1)) &&
     (deltaX <= 1) &&
     (deltaY <= 1)) {
       cout <<  "Valid King move";
     }

  return FALSE;
}