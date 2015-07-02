// This file provides an implementation for the standard Chess Rook. 
//// ----------------------------------------------------------------------*80*1

#ifndef ROOK_H
#define ROOK_H

class Rook : protected Piece {

  public:

  Rook();

  boolean isMoveValid(pieceLocation dest,Board board);
};

#endif //ROOK_H