// This file provides an implementation for the standard Chess Queen. 
//// ----------------------------------------------------------------------*80*

#include <iostream>
#include "common.h"
#include "Location.h"
#include "Board.h"
#include "Piece.h"
#include "Queen.h"
using namespace std;

boolean Queen::isMoveValid(pieceLocation dest,
                          int boardLength, 
                          PieceColor pieceAtDestColor) {

  if(!isLocationValid(boardLength,dest)) {
    cout << "Destination is not within limits of board";
    return FALSE;
  }

  if(areLocationsSame(dest,locationOnBoard)) {
    cout << "Destination can't be same as current location";
    return FALSE;
  }

  if(pieceAtDestColor == color) {
    cout << "Piece of same color at location";
    return FALSE;
  }

  int deltaX = abs(dest.getXValue() - locationOnBoard.getXValue());
  int deltaY = abs(dest.getYValue() - locationOnBoard.getYValue());

  int absX = dest.getXValue() - locationOnBoard.getXValue();
  int absY = dest.getXValue() - locationOnBoard.getYValue();

  if((deltaX <= (boardLength - 1) && deltaY == 0) ||
     (deltaY <= (boardLength - 1) && deltaX == 0) ||
     ((deltaX <= (boardLength - 1)) &&
      (deltaY <= (boardLength - 1)) &&
      (absX == (-1) * absY))){
      cout << "Valid Queen move";
      return TRUE;
  }

  return FALSE;
}