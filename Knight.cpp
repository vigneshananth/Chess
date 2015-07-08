// This file provides an implementation for the standard Chess Knight. 
//// ----------------------------------------------------------------------*80*1

#include <iostream>
#include "common.h"
#include "Location.h"
#include "Piece.h"
#include "Knight.h"
using namespace std;
  


boolean Knight::isMoveValid(pieceLocation dest,
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

  int deltaX = abs(dest.getXValue() - location.getXValue());
  int deltaY = abs(dest.getYValue() - location.getYValue());

  if((deltaX == 1 && deltaY == 2) || (deltaX == 2 && deltaY == 1)){
    cout <<"Valid Knight move";
    return TRUE;
  }

  return FALSE;
}

