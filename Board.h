// This file provides a generic implementation for the generic Chess Board. 
//// ----------------------------------------------------------------------*80*

#ifndef BOARD_H
#define BOARD_H

class Board {
  protected:
    int length;
    ChessSet set[2];
  public:
    int getLength(void) { return length; }
    PieceColor getPieceColor(pieceLocation location) { return WHITE;}
    boolean    isLocationEmpty(pieceLocation location) { return FALSE;}
    PieceType  getPieceType(pieceLocation location) { return PAWN; }
    boolean isEmpty(pieceLocation source, pieceLocation dest) { return FALSE; }
};
#endif //BOARD_H
