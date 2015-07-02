//This file provides a classical chess set implementation.
//// ----------------------------------------------------------------------*80*
#ifndef CHESS_SET_H
#define CHESS_SET_H

class ChessSet {
private: 
  Pawn pawns;
  // Knight knights[2];
  // Rook rooks[2];

public:

  PieceColor color;

  ChessSet();
  // void setColor(PieceColor color){};
  // void initializeLocations(PieceColor color){};

};

#endif //CHESS_SET_H