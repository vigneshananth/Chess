// This file provides an implementation for the standard Chess King. 
//// ----------------------------------------------------------------------*80*

#include <iostream>
#include "common.h"
#include "Location.h"
#include "Board.h"
#include "Piece.h"
#include "King.h"
using namespace std;

boolean King::isMoveValid(pieceLocation dest, Board board) {

  if(!isLocationValid(board.getLength(),dest)) {
    cout << "Destination is not within limits of board";
    return FALSE;
  }

  if(areLocationsSame(dest,locationOnBoard)) {
    cout << "Destination can't be same as current location";
  }

  int deltaX = abs(dest.getXValue() - locationOnBoard.getXValue());
  int deltaY = abs(dest.getYValue() - locationOnBoard.getYValue());

  if((deltaX <= (board.getLength() - 1)) && 
     (deltaY <= (board.getLength() -1)) &&
     (deltaX <= 1) &&
     (deltaY <= 1)) {
       cout <<  "Valid King move";
     }

  return FALSE;
}