// This file provides an implementation for the standard Chess Bishop. 
//// ----------------------------------------------------------------------*80*

#ifndef BISHOP_H
#define BISHOP_H

class Bishop : public Piece {

  pieceLocation location;

  public:

  Bishop(): Piece(BISHOP,TRUE,WHITE,new pieceLocation(0,0)){

  }
  
  boolean isMoveValid(pieceLocation dest,
              		  int boardLength,
              		  PieceColor pieceAtDestColor);

};

#endif // BISHOP_H