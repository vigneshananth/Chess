// This file provides a generic implementation for different chess pieces. 
// Several functions in this class needed to be implemented by derived classes.

//// ----------------------------------------------------------------------*80*

#ifndef PIECE_H
#define PIECE_H

class Piece {
 //Private Variables
protected:
  PieceType type;
  // A stickler for Object oriented programming would complain that whether a 
  // piece is on or off a board has nothing to do with the piece itself and 
  // should not be placed in the Piece Class. However, I don't see a better 
  // place for this at the moment, so I'll let it live here.
  boolean isOnBoard;

  PieceColor color;
  pieceLocation locationOnBoard;

public:
  Piece() {}
  Piece(PieceType type,
        boolean isPieceOnBoard,
        PieceColor color,
        pieceLocation *newLocation);
  PieceType getPieceType(void);
  void setPieceType(PieceType newType);
  boolean isPieceOnBoard(void);
  void AddOrRemovePieceFromBoard(boolean add);
  void setPieceLocation(pieceLocation newLocation);
  boolean getPieceLocation(pieceLocation *returnPieceLocation);
  virtual boolean isMoveValid(pieceLocation dest,Board board) = 0;
};
#endif //PIECE_H