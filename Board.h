// This file provides a generic implementation for the generic Chess Board. 
//// ----------------------------------------------------------------------*80*

#ifndef BOARD_H
#define BOARD_H

class Board {
  protected:
    int length;
    //This is a 2d representation of the chess board. 
    //Each 8 bit value is split up as follows:
    //Bit 7    : Represents the color as enumerated in ::PieceColor.
    //Bits 4-6 : Represent the type of piece as enumerated in ::PieceType.
    //Bits 0-3 : Represent the number of each type of piece. Eg. Pawns 0 to 7 etc.
    uint8_t **grid;
    ChessSet set[2];
  public:
  	Board();
    int getLength(void) { return length; }
    PieceColor getPieceColor(pieceLocation location);
    boolean    isLocationEmpty(pieceLocation location) { return FALSE;}
    PieceType  getPieceType(pieceLocation location) { return PAWN; }
    boolean isEmpty(pieceLocation source, pieceLocation dest) { return FALSE; }
};

#endif //BOARD_H
