// This file provides an implementation for the standard Chess Bishop. 
//// ----------------------------------------------------------------------*80*

#include <iostream>
#include "common.h"
#include "Location.h"
#include "Board.h"
#include "Piece.h"
#include "Bishop.h"
using namespace std;

boolean Bishop::isMoveValid(pieceLocation dest, Board board) {

  if(!isLocationValid(board.getLength(),dest)) {
    cout << "Destination is not within limits of board";
    return FALSE;
  }

  if(areLocationsSame(dest,locationOnBoard)) {
    cout << "Destination can't be same as current location";
  }

  int deltaX = abs(dest.getXValue() - locationOnBoard.getXValue());
  int deltaY = abs(dest.getYValue() - locationOnBoard.getYValue());

  int absX = dest.getXValue() - locationOnBoard.getXValue();
  int absY = dest.getXValue() - locationOnBoard.getYValue();

  if((deltaX <= (board.getLength() - 1)) &&
     (deltaY <= (board.getLength() - 1)) &&
     (absX == (-1) * absY)){
       cout << "Valid Bishop move";
       return TRUE;
  }

  return FALSE;
}