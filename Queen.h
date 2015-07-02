// This file provides an implementation for the standard Chess Queen. 
//// ----------------------------------------------------------------------*80*

#ifndef QUEEN_H
#define QUEEN_H

class Queen : protected Piece {

  pieceLocation location;

  public:

  Queen(): Piece(QUEEN,TRUE,WHITE,new pieceLocation(0,0)){

  }
  
  boolean isMoveValid(pieceLocation dest,Board board);
};

#endif // QUEEN_H