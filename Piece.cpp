// This file provides a generic implementation for different chess pieces. 
// Several functions in this class needed to be implemented by derived classes.

//// ----------------------------------------------------------------------*80*

#include <iostream>
#include "common.h"
#include "Location.h"
#include "Piece.h"
using namespace std;

Piece::Piece(PieceType newType,
             boolean isPieceOnBoard,
             PieceColor color,
             pieceLocation *newLocation){
 type = newType;
  isOnBoard = isPieceOnBoard;
  locationOnBoard.setPieceLocation(*newLocation);
}

PieceType Piece::getPieceType(void) {
  return type;
}

void Piece::setPieceType(PieceType newType) {
  type = newType;
}

boolean Piece::isPieceOnBoard(void) {
  return isOnBoard;
}

void Piece::AddOrRemovePieceFromBoard(boolean add) {
  isOnBoard = add;
}

void Piece::setPieceLocation(pieceLocation *newLocation) {
  locationOnBoard.setPieceLocation(newLocation);
  AddOrRemovePieceFromBoard(TRUE);
}

void Piece::setPieceLocation(pieceLocation newLocation) {
  locationOnBoard.setPieceLocation(newLocation);
  AddOrRemovePieceFromBoard(TRUE);
}

boolean Piece::getPieceLocation(pieceLocation *returnPieceLocation) {
  if(isPieceOnBoard()){
    locationOnBoard.getPieceLocation(returnPieceLocation); 
    return TRUE;
  } else {
    return FALSE;
  }
}

// virtual legalMoves* getLegalMoves(void);

// legalMoves* getLegalMoves(void)
// {
//   legalMoves *dummy = new legalMoves;
//   dummy->current.x = 1;
//   dummy->current.y = 0;
//   dummy->next = NULL;
//   return dummy;
// }


