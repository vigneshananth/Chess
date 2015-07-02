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

boolean Rook::isMoveValid(pieceLocation dest,Board board) {

  if(!isLocationValid(board.getLength(),dest)) {
    cout << "Destination is not within limits of board";
    return FALSE;
  }

  if(areLocationsSame(dest,locationOnBoard)) {
    cout << "Destination can't be same as current location";
  }
  
  if(!board.isEmpty(locationOnBoard,dest)){
    cout << "Some piece blocking move ";
    return FALSE;
  }

  int deltaX = abs(dest.getXValue() - locationOnBoard.getXValue());
  int deltaY = abs(dest.getYValue() - locationOnBoard.getYValue());

  if((deltaX <= board.getLength()-1 && deltaY == 0) || (deltaX == 0 && deltaY <= board.getLength()-1)){
    cout <<"Valid rook move";
    return TRUE;
  }

  return FALSE;
}