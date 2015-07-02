// This file provides an implementation for the standard Chess pawn. 
//// ----------------------------------------------------------------------*80*1

#ifndef PAWN_H
#define PAWN_H

class Pawn : protected Piece {

pieceLocation location;

boolean firstMove;
public:

  Pawn();
  boolean isMoveValid(pieceLocation dest,Board board);
};

#endif // PAWN_H