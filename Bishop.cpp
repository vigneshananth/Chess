// This file provides an implementation for the standard Chess Bishop. 
//// ----------------------------------------------------------------------*80*

#include <iostream>
#include "common.h"
#include "Location.h"
#include "Piece.h"
#include "Bishop.h"
using namespace std;

boolean Bishop::isMoveValid(pieceLocation dest,
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

  int deltaX = abs(dest.getXValue() - locationOnBoard.getXValue());
  int deltaY = abs(dest.getYValue() - locationOnBoard.getYValue());

  int absX = dest.getXValue() - locationOnBoard.getXValue();
  int absY = dest.getXValue() - locationOnBoard.getYValue();

  if((deltaX <= (boardLength - 1)) &&
     (deltaY <= (boardLength - 1)) &&
     (absX == (-1) * absY)){
       cout << "Valid Bishop move";
       return TRUE;
  }

  return FALSE;
}