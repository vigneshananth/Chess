// This file provides an implementation for the standard Chess Knight. 
//// ----------------------------------------------------------------------*80*

#ifndef KNIGHT_H
#define KNIGHT_H

class Knight : protected Piece {

  pieceLocation location;

  public:

  Knight() : Piece (KNIGHT,TRUE,WHITE,new pieceLocation(0,0)){

  }

  boolean isMoveValid(pieceLocation dest,Board board);
};

#endif // KNIGHT_H