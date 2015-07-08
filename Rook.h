// This file provides an implementation for the standard Chess Rook. 
//// ----------------------------------------------------------------------*80*1

#ifndef ROOK_H
#define ROOK_H

class Rook : public Piece {

  public:

  Rook();

  boolean isMoveValid(pieceLocation dest,
  					  int boardlength,
  					  PieceColor pieceAtDestColor);
};

#endif //ROOK_H