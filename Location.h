//This file holds the 2 dimensional location of a particular object.
//// ----------------------------------------------------------------------*80*

#ifndef PIECE_LOCATION_H
#define PIECE_LOCATION_H

class pieceLocation {
  int x;
  int y;

public:

  pieceLocation() {
    x = 0;
    y = 0;
  }
  
  pieceLocation(int newX,int newY) {
    x = newX;
    y = newY;
  }

  pieceLocation(pieceLocation & setPieceLocation) {
    x = setPieceLocation.x;
    y = setPieceLocation.y;
  }

  void getPieceLocation(pieceLocation *getPieceLocation) {
    getPieceLocation->x = x;
    getPieceLocation->y = y;
  }

  void setPieceLocation(const pieceLocation setPieceLocation){
    x = setPieceLocation.x;
    y = setPieceLocation.y;
  }

  void setPieceLocation(pieceLocation *setPieceLocation){
    x = setPieceLocation->x;
    y = setPieceLocation->y;
  }

  int getXValue(){
    return x;
  }

  int getYValue(){
    return y;
  }
};

boolean isLocationValid(int boardLength,pieceLocation location);
boolean areLocationsSame(pieceLocation a, pieceLocation b);

#endif //PIECE_LOCATION_H