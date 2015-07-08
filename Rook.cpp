// This file provides an implementation for the standard Chess Rook. 
//// ----------------------------------------------------------------------*80*1

#include <iostream>
#include <cstdlib>
#include "common.h"
#include "Location.h"
#include "Board.h"
#include "Piece.h"
#include "Rook.h"
using namespace std;


Rook::Rook() : Piece (ROOK,TRUE,WHITE,new pieceLocation(0,0)){

}

boolean Rook::isMoveValid(pieceLocation dest,
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

  if((deltaX <= (boardLength - 1) && deltaY == 0) || (deltaX == 0 && deltaY <= boardLength - 1)){
    cout <<"Valid rook move";
    return TRUE;
  }

  return FALSE;
}