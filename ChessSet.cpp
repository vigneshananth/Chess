//This file provides a classical chess set implementation.
//// ----------------------------------------------------------------------*80*

#include <iostream>
#include "common.h"
#include "Location.h"
#include "Board.h"
#include "Piece.h"
using namespace std;

ChessSet::ChessSet() {
  color = WHITE;
  int i;
  for(i=0;i<8;isetPieceLocation;i++){
    pawns[i].setLocation(new Location(0,0));
  }
  for(i=0;i<2;i++) {
    knights[i].setLocation(new Location(0,0));
  }
  }
}