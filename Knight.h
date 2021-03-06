// This file provides an implementation for the standard Chess Knight. 
//// ----------------------------------------------------------------------*80*

#ifndef KNIGHT_H
#define KNIGHT_H

class Knight : public Piece {

  pieceLocation location;

  public:

  Knight() : Piece (KNIGHT,TRUE,WHITE,new pieceLocation(0,0)){

  }

  boolean isMoveValid(pieceLocation dest,
  					  int boardLength,
  					  PieceColor pieceAtDestColor);
};

#endif // KNIGHT_H