// This file provides an implementation for the standard Chess pawn. 
//// ----------------------------------------------------------------------*80*

#ifndef PAWN_H
#define PAWN_H

class Pawn : public Piece {

pieceLocation location;

boolean firstMove;
public:

  Pawn();
  boolean isMoveValid(pieceLocation dest,
              int boardLength,
              PieceColor pieceAtDestColor);
};

#endif // PAWN_H