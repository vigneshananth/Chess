//This file provides a classical chess set implementation.
//// ----------------------------------------------------------------------*80*
#ifndef CHESS_SET_H
#define CHESS_SET_H

class ChessSet {

private: 
  Pawn pawns[8];
  Knight knights[2];
  Rook rooks[2];
  Queen queen;
  Bishop bishops[2];
  King king;
public:

  PieceColor color;

  ChessSet(PieceColor color);
  // void setColor(PieceColor color){};

};

#endif //CHESS_SET_H