// This file provides an implementation for the standard Chess Knight. 
//// ----------------------------------------------------------------------*80*1

#include <iostream>
#include <cstdlib>
#include "common.h"
#include "Location.h"
#include "ChessSet.h"
#include "Board.h"
#include "Piece.h"
#include "Knight.h"
using namespace std;
  


boolean Knight::isMoveValid(pieceLocation dest,Board board) {

  if(!isLocationValid(board.getLength(),dest)) {
    cout << "Destination is not within limits of board";
    return FALSE;
  }

  if(areLocationsSame(dest,locationOnBoard)) {
    cout << "Destination can't be same as current location";
  }
  
  int deltaX = abs(dest.getXValue() - location.getXValue());
  int deltaY = abs(dest.getYValue() - location.getYValue());

  if((deltaX == 1 && deltaY == 2) || (deltaX == 2 && deltaY == 1)){
    cout <<"Valid Knight move";
    return TRUE;
  }

  return FALSE;
}

