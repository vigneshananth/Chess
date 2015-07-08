// This file provides an implementation for the standard Chess King. 
//// ----------------------------------------------------------------------*80*

#ifndef King_H
#define King_H

class King : public Piece {

  pieceLocation location;

  public:

  King(): Piece(KING,TRUE,WHITE,new pieceLocation(0,0)){

  }
  
  boolean isMoveValid(pieceLocation dest,
              int boardLength,
              PieceColor pieceAtDestColor);

};

#endif // KING_H