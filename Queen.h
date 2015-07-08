// This file provides an implementation for the standard Chess Queen. 
//// ----------------------------------------------------------------------*80*

#ifndef QUEEN_H
#define QUEEN_H

class Queen : public Piece {

  pieceLocation location;

  public:

  Queen(): Piece(QUEEN,TRUE,WHITE,new pieceLocation(0,0)){

  }
  
  boolean isMoveValid(pieceLocation dest,
                      int boardLength,
                      PieceColor pieceAtDestColor);

};

#endif // QUEEN_H